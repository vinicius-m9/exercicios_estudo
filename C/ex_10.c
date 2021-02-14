/*
Usando o comando switch, implemente um algoritmo que leia um inteiro entre 1 e 7 e imprima
o dia da semana correspondente a esse número. Isto é, Domingo!, se 1, Segunda-feira!, se 2,
e assim por diante. Além disso, caso o usuário insira qualquer número diferente de 1-7, a
mensagem "Numero invalido!" deve ser impressa.
*/

#include<stdio.h>

void main(){
    int num;

    scanf("%i", &num);

    switch(num){
        case 1:
            printf("Domingo!");
            break;
        case 2:
            printf("Segunda-feira!");
            break;
        case 3:
            printf("Terca-feira!");
            break;
        case 4:
            printf("Quarta-feira!");
            break;
        case 5:
            printf("Quinta-feira!");
            break;
        case 6:
            printf("Sexta-feira!");
            break;
        case 7:
            printf("Sabado!");
            break;
        default:
            printf("Numero invalido!");
    }
}
