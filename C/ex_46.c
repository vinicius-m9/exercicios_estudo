/**
* Faça um programa que leia uma matriz de tamanho 4 × 4. Calcule
* e imprima a SOMA dos elementos dessa matriz que NÃO pertencem à
* DIAGONAL PRINCIPAL nem à DIAGONAL SECUNDÁRIA.
*/

#include <stdio.h>

int main(void){
    int arr[4][4], sum = 0;

    for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++){
            scanf("%i", &arr[i][j]);

            sum += arr[i][j];
        }

    for(int i = 0; i < 4; i++){
        sum -= arr[i][i];
        sum -= arr[i][3 - i];
    }

    printf("Soma: %i", sum);

	return 0;
}
