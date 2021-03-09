/**
* A multiplicação de dois números inteiros pode ser feita através de somas
* sucessivas (por exemplo, 2 * 3 = 2 + 2 + 2). Crie uma função recursiva
* que calcule a multiplicação por somas sucessivas de DOIS inteiros.
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
