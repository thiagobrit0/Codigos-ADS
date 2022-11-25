
const app = require('./app');

/* 
Pondo o aplicativo pra rodar na porta 3333
e determinando uma mensagem de callback
 */
app.listen(3333, () => console.log('Server running or port 3333'));
