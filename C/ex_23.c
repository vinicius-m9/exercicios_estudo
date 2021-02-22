/*
Escreva uma função que receba dois valores numéricos e um símbolo.
Esse símbolo representará a operação que se deseja efetuar com os
números. Assim, se o símbolo for “+”, deverá ser realizada uma
adição, se for “-”, uma subtração, se for “/”, uma divisão e se
for “*”, será efetuada uma multiplicação. Retorne o resultado da
operação para o programa principal.
*/

#include<stdio.h>

float calculator(void){
    float num1, num2;
    char operation;

    scanf("%f %f", &num1, &num2);
    scanf(" %c", &operation);

    switch(operation){
        case '+': return (num1+num2);
        case '-': return (num1-num2);
        case '*': return (num1*num2);
        case '/': return (num1/num2);
    }
}

void main(){
    printf("%f", calculator());
}
