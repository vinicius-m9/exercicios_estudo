/**
* Elabore um programa que solicite, na seguinte ordem, ao usuario entrar com o valor do dia,
* mes e ano (inteiros). Em seguida, imprima os valores lidos separados por uma barra (/).
*/

#include<stdio.h>

void main(){
    int dia, mes, ano;

    scanf("%i", &dia);
    scanf("%i", &mes);
    scanf("%i", &ano);

    printf("%i/%i/%i", dia, mes, ano);
}
