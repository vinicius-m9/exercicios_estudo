/*
Dado o array [2, 4, 6, 8, 10], multiplique todos os valores por 2 e guarde em um novo array.
(Faça o exercício de duas formas: forEach e map).
*/

const arr = [2, 4, 6, 8, 10]

//utilizando map()
const newArr1 = arr.map((value) => {return value*2})

console.log ('novo array utilizando map(): ' + '[' + newArr1 + ']')

//utilizando forEach()
const newArr2 = []
arr.forEach((value) => {newArr2.push(value*2)})

console.log ('novo array utilizando forEach(): ' + '[' + newArr2 + ']')