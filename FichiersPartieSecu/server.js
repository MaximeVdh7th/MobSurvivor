#!/usr/bin/env node

const express = require('express');
const bodyParser = require("body-parser");
const app = express();
const port = 3000;
//const bodtParser = require('body-parser');
var sha256 = require('js-sha256');
const emailRegex = new RegExp(/^(([^<>()[\]\\.,;:\s@\"]+(\.[^<>()[\]\\.,;:\s@\"]+)*)|(\".+\"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/, "i");


//Connection to Database
const mysql = require('mysql');
const connection = mysql.createConnection({
	host: "localhost",
	user: "root",
	password: "123AQW",
	database: "heajgame"
});

app.use(express.static('public'));
/*
app.set('views', __dirname + '/public/views');
app.engine('html', require('ejs').renderFile);
app.set('view engine', 'html');
*/
app.use(bodyParser.urlencoded( {extented: true} ));

var jsonParser = bodyParser.json();


app.get('/', (req, res) => {
  //res.send('Hello World!')
  //res.sendFile(path.join(__dirname + '/public', '/index.html'));
  res.render(__dirname + '/public/index.html');
})


//Post method route
app.post('/post', jsonParser, (req,res) => {
	var accountExists = false;
	console.log("entered post");
	let query = "SELECT * FROM users WHERE email = '" + req.body.email +  "'";
	//generate password salted
	let salt = GenerateSalt();
	let password = sha256(req.body.password + salt)
	connection.query(query, function(error, results, fields){
		if(error) throw error;
		//Account Exists
		if(results.length > 0){
			console.log("Account exists");
			return;
		}
		//Create account
		else{
			console.log("Account OK");
			var users= [
				req.body.email,
				password,
				salt,
				req.body.token
			];
			connection.query('INSERT INTO users(email, password, salt, token, created_at, updated_at) VALUES (?, ?, ?, ?, NOW(), NOW())', users, function(error, results,fields ) {
				if(error)throw error;
				console.log(results.insertID)
			});
		}	

	});
	res.json(req.body);
})

//token
app.post('/score', jsonParser, (req,res) => {
	//1 v�rifier que le token appartiennent � un utilisateur
	let token = req.body.token;
	let score = req.body.score;
	connection.query("SELECT * FROM users WHERE token = '" + req.body.token +  "'", function(error, results,fields ){
	if(error)throw error;
	
	//account already exists
	if(results.length > 0){
		console.log("youpee");
		let id = results[0].id;
		var ScoreData =[
			id,
			score
		];
		connection.query('INSERT INTO scores(userID, score, updated_at, created_at) VALUES (?, ?, NOW(), NOW())', ScoreData, function(error, results, fields){
			if (error) throw error;
			console.log(results.insertID)
		});
		return;
	}
	else{
		//token not valid
		res.json({"success" : false, "message" : "Token est invalide"})
	}
	res.json({"success" : true})
	});
});


app.post('/TopPlayers', jsonParser, (req, res) => {
/*
	const winnersScores = new Array();
	const winnersIDs = new Array();
	const winnersEmails = new Array();
	var merged = {};
	connection.query("SELECT * FROM scores ORDER BY score DESC LIMIT 10 ", function(error, results, fields){
		if (error) throw error;
		let userids = results.userID;
		let resultsLength;
		resultsLength = results.length;


		for (i = 0; i<results.length; i++){
			winnersScores[i]= results[i].score;
			winnersIDs[i] = results[i].userID;


		}

		for (var j = 1; j<=resultsLength; j++){
			console.log(j);
			if(j == resultsLength){

					
				connection.query("SELECT email FROM users WHERE id = '" + winnersIDs[j-1] +  "'", function(error, results,fields ){
					if (error) throw error;
					let usermail = results.email;
					console.log(usermail);
					var untreatedString = JSON.parse(JSON.stringify(Object.values(results)));
					winnersEmails.push(untreatedString);
					merged = winnersEmails.concat(winnersScores);
					console.log(merged);
					res.send(merged);
					//res.json({"success" : true})
				
				});
					


				};
			connection.query("SELECT email FROM users WHERE id = '" + winnersIDs[j-1] +  "'", function(error, results,fields ){
				if (error) throw error;
				let usermail = results.email;
				console.log(usermail);
				var untreatedString = JSON.parse(JSON.stringify(Object.values(results)));
				//console.log(untreatedString.email);
				
				winnersEmails.push(untreatedString);
			
			
			});
		}
	
	});

	connection.end;

	
*/

	connection.query("SELECT * FROM scores JOIN users ON users.id = scores.userID ORDER BY score DESC LIMIT 10", function(error, results, fields){
		if (error) throw error;
		if (results.length>0){
			const winnersScores = new Array();
			const winnersIDs = new Array();
			const winnersEmails = new Array();
			//console.log(results);
			for (var i = 0; i< results.length; i++) {
				//let treatedString = results[i].email;
				//treatedString = treatedString.replace(/'/g, '');
				winnersScores.push(results[i].score);
				winnersEmails.push(results[i].email);
			}
			console.log(winnersEmails);
			console.log(winnersScores);
			var winners = {};
			winnersEmails.forEach((key, j) => winners[key] = winnersScores[j]);
			
			for (var key in winners){
				key.replace(/'/g, '');
			}
			console.log(winners);
			res.json({"body" : winners})

			
		}



});






});


app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})
function GenerateSalt(){
	return sha256(Math.random() + " test ");
}


connection.connect((error) =>{
	if(error) throw error;
	console.log('connected to database');
})

function fetchData()
{ 
	const query = 'Select * FROM users';
	connection.query(query, (error,results) => {
		if(error) throw error;
		console.log('data fetched or smt : ', results);
	});
}

function WinnersData(callback){
	connection.query("SELECT * FROM scores JOIN users ON users.id = scores.userID ORDER BY score DESC LIMIT 10", function(error, results, fields){
		if (error) throw error;
		callback(results.email);

	});

}
module.exports = connection;