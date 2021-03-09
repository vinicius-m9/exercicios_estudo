/**
* Fa�a um programa que permita ao usu�rio entrar com uma matriz
* de tamanho 3 � 3 de n�meros INTEIROS. Em seguida, calcule um VETOR
* contendo TR�S posi��es, em que cada posi��o dever� armazenar a SOMA
* dos n�meros de cada COLUNA da matriz. Exiba na tela esse array.
*/

#include <stdio.h>

int main(void){
	int arr[3][3], sum[3] = {0};

	for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++){
            scanf("%i", &arr[i][j]);

            if(j == 0)
                sum[0] += arr[i][j];
            else if(j == 1)
                sum[1] += arr[i][j];
            else
                sum[2] += arr[i][j];
        }

    for(int i = 0; i < 3; i++)
        printf("%i ", sum[i]);

	return 0;
}
