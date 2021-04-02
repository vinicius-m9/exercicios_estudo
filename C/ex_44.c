/**
* Faca um programa que leia uma matriz de tamanho 3 X 3. Calcule
* e imprima a SOMA dos elementos dessa matriz que estao ACIMA da
* DIAGONAL PRINCIPAL.
*/

#include <stdio.h>

int main(void){
	int arr[3][3], sum = 0;

	for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++){
            scanf("%i", &arr[i][j]);

            if(j > i)
                sum += arr[i][j];
        }

    printf("Soma: %i", sum);

	return 0;
}
