/**
* Calcular e imprimir na tela uma matriz de tamanho LINHA × COLUNA,
* em que seus elementos são da forma:
*
* a) A[i][j] = 2i + 7j - 2 se i < j;
* b) A[i][j] = 3i^2 - 1 se i = j;
* c) A[i][j] = 4i^3 + 5j^2 + 1 se i > j.
*
* Vale ressaltar que a LINHA e COLUNA deve ser definida pelo USUÁRIO.
*/

#include <stdio.h>
#include <math.h>

int main(void){
	int lineLength, columnLength;

	scanf("%i %i", &lineLength, &columnLength);

	int A[lineLength][columnLength];

	for(int i = 0; i < lineLength; i++)
        for(int j = 0; j < columnLength; j++){
            if(i < j)
                A[i][j] = 2 * i + 7 * j - 2;
            else if(i > j)
                A[i][j] = 4 * pow(i, 3) + 5 * pow(j, 2) + 1;
            else
                A[i][j] = 3 * pow(i, 2) - 1;
        }

    for(int i = 0; i < lineLength; i++){
        for(int j = 0; j < columnLength; j++)
            printf("%i ", A[i][j]);

        printf("\n");
    }

	return 0;
}
