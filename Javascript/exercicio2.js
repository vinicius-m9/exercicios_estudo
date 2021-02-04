/*
Na frase “bwiznwnxooznwncihwbuzbajzoandoabs”, conte quantas vogais aparecem.
(Faça o exercício de 3 formas: for, forEach e for...of. Checar documentação do javascript).
*/

const str = 'bwiznwnxooznwncihwbuzbajzoandoabs'

//utilizando for
let numeroVogais = 0

for (let i=0 ; i<str.length ; i++) {
    switch (str.charAt(i)){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            numeroVogais++
        default:
            break
    }
}

console.log('resultado utilizando for: ' + numeroVogais + ' vogais')

//utilizando forEach()
const arr = str.split('')
numeroVogais = 0

arr.forEach((letra) => {
    switch (letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            numeroVogais++
        default:
            break
    }
})

console.log('resultado utilizando forEach(): ' + numeroVogais + ' vogais')

//utilizando for ... of
numeroVogais = 0

for (let i of str) {
    switch (i){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            numeroVogais++
        default:
            break
    }
}

console.log('resultado utilizando for ... of: ' + numeroVogais + ' vogais')