/*
Crie uma função que recebe e chama outra função como parâmetro  (conceito de callback).
*/

const sum = (v1,v2) => v1+v2
const sub = (v1,v2) => v1-v2
const div = (v1,v2) => v1/v2
const multi = (v1,v2) => v1*v2

const printData = (cb, v1, v2) => {
  const result = cb(v1, v2)
  console.log(`Resultado: ${result}`)
}

printData(sum, 6, 2)
printData(sub, 10, 2)
printData(div, 16, 2)
printData(multi, 4, 2)