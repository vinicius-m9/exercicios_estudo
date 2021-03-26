/*
* Escreva um programa que declare uma MATRIZ de inteiros (3 x 3)
* e um ponteiro para inteiros. ASSOCIE o PONTEIRO a MATRIZ. Agora,
* SOME mais um (+1) a cada posição da MATRIZ usando o ponteiro.
* Utilize aritmética de ponteiros para resolver o problema.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int arr[3][3], *pArr = &arr[0][0];

    for(int index = 0; index < 9; index++){
        scanf("%d", pArr + index);
        *(pArr + index) += 1;
    }

    for(int index = 0; index < 9; index++)
        printf("%d\n", *(pArr + index));

	return 0;
}
