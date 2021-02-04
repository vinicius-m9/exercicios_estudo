/*
Crie uma função que soma e retorna dois números e, depois,
crie a mesma função em forma de arrow function.
*/

function soma (v1, v2) {
    return (v1+v2)
}
console.log(`soma = ${soma(2, 2)}`)

const sum = (v1, v2) => v1+v2
console.log(`sum = ${sum(2, 2)}`)