/**
* Implemente um algoritmo para ler o numero de alunas e alunos matriculados na disciplina
* de Programacao Estruturada. A estrutura de selecao e utilizada para verificar se a sala de
* aula possui a MESMA quantidade de alunos e alunas OU se possui MAIS alunas do que alunos OU
* se possui MAIS alunos do que alunas. Caso uma dessas verificacoes seja VERDADEIRA,
* o algoritmo deve escrever uma mensagem especifica.
*/

#include<stdio.h>

void main(){
    int qtdAlunos, qtdAlunas;

    printf("Digite a quantidade de alunas:\n");
    scanf("%i", &qtdAlunas);
    printf("Digite a quantidade de alunos:\n");
    scanf("%i", &qtdAlunos);

    if(qtdAlunos>qtdAlunas){
        printf("Quantidade de alunos eh maior do que de alunas!");
    } else if(qtdAlunos<qtdAlunas){
        printf("Quantidade de alunas eh maior do que de alunos!");
    } else {
        printf("Mesma quantidade!");
    }
}
