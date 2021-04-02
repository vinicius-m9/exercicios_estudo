/**
* Faca um programa que leia uma matriz (inteiros) de tamanho 3 X 3
* com numeros diferentes. Imprima na tela o menor valor, maior valor
* contido nessa matriz e a sua localizacao (linha e coluna).
*/

#include <stdio.h>

int main(void){
	int arr[3][3], higherI = 0, higherJ = 0, lowestI = 0, lowestJ = 0;

	for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++){
            scanf("%i", &arr[i][j]);

            if(i != 0 || j != 0){
                if(arr[higherI][higherJ] < arr[i][j]){
                    higherI = i;
                    higherJ = j;
                }
                if(arr[lowestI][lowestJ] > arr[i][j]){
                    lowestI = i;
                    lowestJ = j;
                }
            }
        }

    printf("Maior: %i\n", arr[higherI][higherJ]);
    printf("Posicao (maior): %i linha e %i coluna\n", higherI, higherJ);
    printf("Menor: %i\n", arr[lowestI][lowestJ]);
    printf("Posicao (menor): %i linha e %i coluna\n", lowestI, lowestJ);

	return 0;
}
