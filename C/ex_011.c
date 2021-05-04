/**
* Faca um programa que mostre ao usuario um menu com quatro opcoes de operacoes matematicas
* (1-Soma, 2-Subtracao, 3-Divisao e 4-Multiplicacao). O usuario escolhe uma das opcoes, e o
* seu algoritmo solicita DOIS valores numericos e realiza a operacao, mostrando o resultado.
* Entretanto, se o usuario digitar alguma opcao diferente de 1-4, a seguinte mensagem deve
* ser apresentada: "Numero Invalido!". Alem disso, os valores numericos das operacoes de SOMA,
* SUBTRACAO e MULTIPLICACAO devem ser declarados como INTEIROS (int) e no caso da DIVISAO,
* devem ser declarados como double.
*/

#include<stdio.h>

void main(){
    int mark;

    printf("1-Soma\n2-Subtracao\n3-Divisao\n4-Multiplicacao\n");
    scanf("%i", &mark);

    switch (mark){
    case 1: ;
        int a, b;

        scanf("%i %i", &a, &b);

        printf("O resultado da soma eh: %i", a+b);
        break;
    case 2: ;
        int c, d;

        scanf("%i %i", &c, &d);

        printf("O resultado da subtracao eh: %i", c-d);
        break;
    case 3: ;
        double g, h;

        scanf("%lf %lf", &g, &h);

        printf("O resultado da divisao eh: %f", g/h);
        break;
    case 4: ;
        int e, f;

        scanf("%i %i", &e, &f);

        printf("O resultado da multiplicacao eh: %i", e*f);
        break;
    default:
        printf("Numero Invalido!");
    }
}
