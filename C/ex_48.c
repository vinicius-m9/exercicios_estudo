/**
* Crie uma funcao recursiva que receba um numero inteiro N e
* retorne o SOMATORIOS dos numeros de 1 a N.
*/

#include <stdio.h>

int sumN(int n){
    int sum = 0;

    if(n == 1)
        return 1;

    sum += n + sumN(n - 1);
    return sum;
}

int main(void){
	int n;

	scanf("%i", &n);

	printf("%i", sumN(n));

	return 0;
}
