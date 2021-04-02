/**
* Faca uma funcao que receba um numero (num) inteiro de 1 a 7 e
* imprima na tela o dia da semana, de acordo com o numero digitado
* pelo usuario. Caso o usuario digite um numero incorreto (num<1 OU num>7),
* o algoritmo deve informar o alerta "O numero deve ser >=1 e <=7!" e
* solicitar NOVAMENTE que o usuario digite o numero correto.
*/

#include<stdio.h>

void getDay(int n){
    switch(n){
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda-feira");
            break;
        case 3:
            printf("Terca-feira");
            break;
        case 4:
            printf("Quarta-feira");
            break;
        case 5:
            printf("Quinta-feira");
            break;
        case 6:
            printf("Sexta-feira");
            break;
        case 7:
            printf("Sabado");
            break;
    }
}

void main(){
    int num;

    scanf("%i", &num);
    while(num<1 || num >7){
        printf("O numero deve ser >=1 e <=7!\n");
        scanf("%i", &num);
    }

    getDay(num);
}
