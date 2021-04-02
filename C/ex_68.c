/*
* Implemente uma funcao que calcule a area da superficie e o volume
* de uma esfera de raio R. Essa funcao deve obedecer ao prototipo:
*
* void calculo(float R, float *area, float *volume)
*
* A area da superficie e o volume sao dados, respectivamente, por:
*
* A = 4 * pi * R^2
* V = (4 * pi * R^3)/3
*
* Ps: Os valores da area e voluma devem ser impressos na funcao
* main(). Alem disso, o valor de pi deve ser 3.14.
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
