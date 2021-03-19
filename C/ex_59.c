/**
* Escreva um programa que declare um inteiro (x = 3), um float
* (y = 3.4) e um char (z = 'A'), e PONTEIROS para inteiro, float,
* e char. ASSOCIE as vari�veis aos ponteiros (use &). MODIFIQUE,
* pelo TECLADO, os valores de CADA vari�vel usando os PONTEIROS.
* IMPRIMA os valores das vari�veis ANTES e AP�S a modifica��o.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int x = 3, *px = &x;
	float y = 3.4, *py = &y;
	char z = 'A', *pz = &z;

	printf("Antes:\nx = %i\ny = %f\nz = %c\n", *px, *py, *pz);

    scanf("%i %f %c", &(*px), &(*py), &(*pz));

    printf("Depois:\nx = %i\ny = %f\nz = %c\n", *px, *py, *pz);

	return 0;
}
