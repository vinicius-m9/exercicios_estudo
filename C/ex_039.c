/**
* Implemente um algoritmo que declare uma matriz de tamanho linha X coluna,
* sendo linha = coluna e devem ser DEFINIDAS pelo USUARIO. Preencha com 1 a DIAGONAL
* PRINCIPAL e com 0 os DEMAIS ELEMENTOS. Ao final, ESCREVA a matriz obtida na tela.
*/

#include <stdio.h>

int main(void){
	int length;

	scanf("%i", &length);

	int arr[length][length];

	for(int i = 0; i < length; i++)
        for(int j = 0; j < length; j++){
            if(i == j)
                arr[i][j] = 1;
            else
                arr[i][j] = 0;
        }

    for(int i = 0; i < length; i++){
        for(int j = 0; j < length; j++)
            printf("%i ", arr[i][j]);

        printf("\n");
    }

	return 0;
}
