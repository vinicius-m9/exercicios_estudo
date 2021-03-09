/**
* Escreva uma função recursiva que calcule a SOMA dos primeiros n cubos:
*
* S = 1^3 + 2^3 + ... + n^3
*/

#include <stdio.h>
#include <math.h>

int sumN(int n){
    int sum = 0;

    if(n == 1)
        return 1;

    sum = pow(n, 3) + sumN(n - 1);
    return sum;

}

int main(void){
    int n;

    scanf("%i", &n);

	printf("%i", sumN(n));

	return 0;
}
