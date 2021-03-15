/**
* Crie uma estrutura para representar as coordenadas de UM
* PONTO no plano (posições X e Y). Em seguida, declare e leia
* do teclado DOIS pontos e exiba a distância entre eles.
*/

#include <stdio.h>
#include <math.h>

struct coordenada {
    int x;
    int y;
};

int main(void){
	struct coordenada coord[2];
	float dist;

	scanf("%i", &coord[0].x);
	scanf("%i", &coord[0].y);

	scanf("%i", &coord[1].x);
	scanf("%i", &coord[1].y);

	dist = sqrt(pow(coord[0].x - coord[1].x, 2) + pow(coord[0].y - coord[1].y, 2));

	printf("%.1f", dist);

	return 0;
}
