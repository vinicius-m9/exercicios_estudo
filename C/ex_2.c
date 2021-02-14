/*
Escreva um programa que leia, na seguinte ordem, a quantidade de notebooks das marcas Sony,
Dell e Toshiba de uma loja. Os valores devem ser entrados via teclado.
Como saída, o programa deve apresentar a quantidade de notebooks discriminadas por marca
(Sony, Dell e Toshiba) e o seu total.
*/

#include<stdio.h>

void main(){
    int qtdSony, qtdDell, qtdToshiba;

    printf("Quantidade de notebooks da marca Sony:\n");
    scanf("%i", &qtdSony);
    printf("Quantidade de notebooks da marca Dell:\n");
    scanf("%i", &qtdDell);
    printf("Quantidade de notebooks da marca Toshiba:\n");
    scanf("%i", &qtdToshiba);

    printf("%i notebook(s) da Sony\n", qtdSony);
    printf("%i notebook(s) da Dell\n", qtdDell);
    printf("%i notebook(s) da Toshiba\n", qtdToshiba);
    printf("Total de %i notebooks", qtdSony+qtdDell+qtdToshiba);
}