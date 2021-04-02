/**
* Escreva um programa que contenha DUAS variaveis inteiras (x=2 e y=5).
* Compare seus ENDERECOS e exiba a letra "A" para o MAIOR endereco e
* "B" para o MENOR.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x = 2, y = 5, *px = &x, *py = &y;

    if (px > py)
        printf("A");
    else
        printf("B");

	return 0;
}
