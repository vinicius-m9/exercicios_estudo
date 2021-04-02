/**
* Escreva uma funcao recursiva que receba por parametro DOIS
* valores inteiros x e y e calcule e retorne o resultado de
* x^y para o programa principal.
*/

#include <stdio.h>

int myPow(int x, int y){
    int mult = 1;

    if(y == 0)
        return 1;

    mult *= x * myPow(x, y - 1);
    return mult;
}

int main(void){
	int x, y;

	scanf("%i %i", &x, &y);

	printf("%i", myPow(x, y));

	return 0;
}
