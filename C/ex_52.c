/**
* A multiplicacao de dois numeros inteiros pode ser feita atraves de somas
* sucessivas (por exemplo, 2 * 3 = 2 + 2 + 2). Crie uma funcao recursiva
* que calcule a multiplicacao por somas sucessivas de DOIS inteiros.
*/

#include <stdio.h>

int mult(int x, int y){
    int sum = 0;

    if(y == 0)
        return 0;

    sum += x + mult(x, y - 1);
    return sum;
}

int main(void){
	int x, y;

	scanf("%i %i", &x, &y);

	printf("%i", mult(x, y));

	return 0;
}
