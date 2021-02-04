/*
Leia o arquivo "db.json" em anexo e imprima o nome e o valor de todos os produtos contidos no arquivo.
Faça uma segunda versão onde imprime somente os itens com estoque > 0.
*/

const list = require('./db.json')

for (let i of list) {
    if (i.stock > 0){
        console.log(i)
    }
}