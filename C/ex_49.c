/**
* Crie uma função recursiva que IMPRIMA todos os
* números naturais de 0 até N em ordem CRESCENTE.
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
