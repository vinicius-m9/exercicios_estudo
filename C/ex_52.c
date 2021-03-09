/**
* A multiplica��o de dois n�meros inteiros pode ser feita atrav�s de somas
* sucessivas (por exemplo, 2 * 3 = 2 + 2 + 2). Crie uma fun��o recursiva
* que calcule a multiplica��o por somas sucessivas de DOIS inteiros.
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
