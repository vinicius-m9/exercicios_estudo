/**
* Leia uma matriz de tamanho 3 X 3. Em seguida, imprima a soma dos valores
* contidos em sua diagonal principal e tambem na sua diagonal secundaria.
*/

#include <stdio.h>

int main(void){
	int arr[3][3], mainSum = 0, secondarySum = 0;

	for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%i", &arr[i][j]);

    for(int i = 0; i < 3; i++){
        mainSum += arr[i][i];
        secondarySum += arr[i][2-i];
    }

    printf("Soma diagonal principal: %i\n", mainSum);
    printf("Soma diagonal secundaria: %i\n", secondarySum);

	return 0;
}
