/**
* Escreva uma funcao que receba dois valores numericos e um simbolo.
* Esse simbolo representara a operacao que se deseja efetuar com os
* numeros. Assim, se o simbolo for “+”, devera ser realizada uma
* adicao, se for “-”, uma subtracao, se for “/”, uma divisao e se
* for “*”, sera efetuada uma multiplicacao. Retorne o resultado da
* operacao para o programa principal.
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
