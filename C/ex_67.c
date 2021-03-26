/*
* Implemente uma função que receba DOIS parâmetros: um vetor de
* caracteres (tamanho 5) e um valor do mesmo tipo do vetor. A
* função deverá preencher os elementos do vetor com esse valor.
* NÃO utilize índices para percorrer o vetor, apenas aritmética
* de ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>

void changeArr(char *arr, char ch);

int main(void){
	char arr[6] = {"-----"}, changeChar = '-', *pArr = arr;

	for(int index = 0; *(pArr + index) != '\0'; index++)
        scanf(" %c", pArr + index);

    scanf(" %c", &changeChar);

    changeArr(arr, changeChar);

    for(int index = 0; *(pArr + index) != '\0'; index++)
        printf("%c", *(pArr + index));

	return 0;
}

void changeArr(char *arr, char ch){
    for(int index = 0; *(arr + index) != '\0'; index++)
        *(arr + index) = ch;
}
