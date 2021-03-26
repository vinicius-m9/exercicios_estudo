/*
* Implemente uma função que calcule a área da superfície e o volume
* de uma esfera de raio R. Essa função deve obedecer ao protótipo:
*
* void calculo(float R, float *area, float *volume)
*
* A área da superfície e o volume são dados, respectivamente, por:
*
* A = 4 * pi * R^2
* V = (4 * pi * R^3)/3
*
* Ps: Os valores da área e voluma devem ser impressos na função
* main(). Além disso, o valor de pi deve ser 3.14.
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
