/*
Escreva um programa que leia o número de alunos e de alunas de uma sala.
Como saída, o programa deve apresentar o número de alunos, de alunas e o total de alunos na sala.
*/

#include<stdio.h>

void main(){
    int qtdAlunos, qtdAlunas, total;

    printf("Digite a quantidade de alunos:\n");
    scanf("%i", &qtdAlunos);
    printf("Digite a quantidade de alunas:\n");
    scanf("%i", &qtdAlunas);

    printf("Alunos: %i\n", qtdAlunos);
    printf("Alunas: %i\n", qtdAlunas);
    printf("Total: %i", qtdAlunas+qtdAlunos);
}
