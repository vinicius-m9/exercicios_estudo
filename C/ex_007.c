/**
* A importancia de R$780.00 sera dividida entre tres ganhadores de um concurso, sendo que:
*
* O primeiro ganhador recebera 46% do total;
* O segundo recebera 32% do total;
* O terceiro recebera o restante.
*
* Calcule e imprima a quantia recebida por cada um dos ganhadores.
*/

#include<stdio.h>
#define valor 780.00


void main(){
    printf("Primeiro ganhador: R$ %.2f\n", valor*0.46);
    printf("Segundo ganhador: R$ %.2f\n", valor*0.32);
    printf("Terceiro ganhador: R$ %.2f", valor*0.22);
}
