/*
A importância de R$780.00 será dividida entre três ganhadores de um concurso, sendo que:

O primeiro ganhador receberá 46% do total;
O segundo receberá 32% do total;
O terceiro receberá o restante.

Calcule e imprima a quantia recebida por cada um dos ganhadores.
*/

#include<stdio.h>
#define valor 780.00


void main(){
    printf("Primeiro ganhador: R$ %.2f\n", valor*0.46);
    printf("Segundo ganhador: R$ %.2f\n", valor*0.32);
    printf("Terceiro ganhador: R$ %.2f", valor*0.22);
}
