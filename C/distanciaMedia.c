/**
* Calculo de distancia media em grafos.
* 
* O programa recebe como entrada o a quantidade de vértices (n) e a triangulação
* superior de uma matriz com os valores da distancia do vertice i ao vertice j.
*
* Exemplo: Para um grafo com 4 vértices e matriz correspondente indicada abaixo,
* a entrada será: 4 2 2 1 1 2 1
* 
*    0 2 2 1
*    0 0 1 2
*    0 0 0 1
*    0 0 0 0
*/

#include <stdio.h>
#include <math.h>

int main(void){
	int n, sum = 0;
    float l;

	printf("n = ");
	scanf("%i", &n);

	printf("\n");

    int arr[n][n];

	for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i < j)
                scanf("%i", &arr[i][j]);
            else
                arr[i][j] = 0;
        }
	}

    printf("\n");

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%i ", arr[i][j]);
            sum += arr[i][j];
        }
        printf("\n");
    }

    printf("\n");

    l = (2 * sum) / (pow(n, 2) - n);
    printf("l = %f\n", l);

	return 0;
}
