/**
* Faça um programa que leia uma matriz de tamanho 4 × 4. Calcule
* e imprima a SOMA dos elementos dessa matriz que estão ABAIXO da
* DIAGONAL PRINCIPAL.
*/

#include <stdio.h>

int main(void){
	int arr[4][4], sum = 0;

	for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++){
            scanf("%i", &arr[i][j]);

            if(j < i)
                sum += arr[i][j];
        }

    printf("Soma: %i", sum);

	return 0;
}
