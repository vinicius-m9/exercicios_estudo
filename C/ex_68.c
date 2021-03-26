/*
* Implemente uma fun��o que calcule a �rea da superf�cie e o volume
* de uma esfera de raio R. Essa fun��o deve obedecer ao prot�tipo:
*
* void calculo(float R, float *area, float *volume)
*
* A �rea da superf�cie e o volume s�o dados, respectivamente, por:
*
* A = 4 * pi * R^2
* V = (4 * pi * R^3)/3
*
* Ps: Os valores da �rea e voluma devem ser impressos na fun��o
* main(). Al�m disso, o valor de pi deve ser 3.14.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void calculo(float R, float *area, float *volume);

int main(void){
	float r, A, V;

	scanf("%f", &r);

    calculo(r, &A, &V);

    printf("Area: %.2f\nVolume: %.2f", A, V);

	return 0;
}

void calculo(float R, float *area, float *volume){
    *area = 4 * 3.14 * pow(R, 2);
    *volume = (4 * 3.14 * pow(R, 3))/3;
}
