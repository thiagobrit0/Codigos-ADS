const express = require('express');
const router = require('./router');

/* Usando o express pra ajudar no desenvolvimento */
const app = express();

/* Toda requisição que aparecer vai cair dentro do router */
app.use(router);

/*
app.get('/tasks', (request, response) => response.status(200).send('Olá, mundo!'));
Se a requisição der certo (status 200),
vai envir como resposta 'Olá, mundo!'
*/


module.exports = app;