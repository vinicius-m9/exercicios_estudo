/**
* Escreva um programa que contenha DUAS vari�veis inteiras (x=2 e y=5).
* Compare seus ENDERE�OS e exiba a letra "A" para o MAIOR endere�o e
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
