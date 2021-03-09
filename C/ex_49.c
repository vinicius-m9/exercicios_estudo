/**
* Crie uma fun��o recursiva que IMPRIMA todos os
* n�meros naturais de 0 at� N em ordem CRESCENTE.
*/

#include <stdio.h>

void printN(int N, int n){
    if(N > n)
        return;

    printf("%i ", N);
    printN(N+1, n);
}

int main(void){
	int n;

	scanf("%i", &n);

	printN(0, n);

	return 0;
}
