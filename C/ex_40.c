/**
* Leia uma matriz de tamanho 4 × 4. Em seguida, CONTE e ESCREVA
* na tela a quantidade de valores MAIORES do que 10 e também a
* quantidade de números NEGATIVOS.
*/

#include <stdio.h>

int main(void){
	int arr[4][4], lessThan0 = 0, greaterThan10 = 0;

	for(int i = 0; i < 4; i++)
        for(int j = 0; j < 4; j++){
            scanf("%i", &arr[i][j]);

            if(arr[i][j] < 0)
                lessThan0++;
            if(arr[i][j] > 10)
                greaterThan10++;
        }

    printf("Qtd. > 10: %i\n", greaterThan10);
    printf("Qtd. < 0: %i\n", lessThan0);

	return 0;
}
