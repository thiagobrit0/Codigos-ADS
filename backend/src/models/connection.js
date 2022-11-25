/* Conexões com o Banco de Dados */

const mysql = require('mysql2/promise');

// CreatePool cria uma lista de conexões
const connection = mysql.createPool({
    host: 'localhost',
    user: 'root',
    password: 'root',
    database: 'todolist'
});

module.exports = connection;