/**
* Implemente um algoritmo para calcular e comparar a area de dois retangulos A e B.
* Antes de calcular a area, o algoritmo deve verificar se os dados de entrada (base e altura)
* representam um retangulo. Caso a resposta seja positiva, deve-se verificar qual retangulo
* possui a maior area ou se eles possuem tamanhos iguais. Vale ressaltar que os dados de
* entrada (do tipo float) devem seguir a seguinte ordem:
*
* Base do retangulo A;
* Altura do retangulo A;
* Base do retangulo B;
* Altura do retangulo B.
*/

#include<stdio.h>

void main(){
    float baseA, alturaA, baseB, alturaB;

    printf("Insira o valor da base do retangulo A:\n");
    scanf("%f", &baseA);
    printf("Insira o valor da altura do retangulo A:\n");
    scanf("%f", &alturaA);
    printf("Insira o valor da base do retangulo B:\n");
    scanf("%f", &baseB);
    printf("Insira o valor da altura do retangulo B:\n");
    scanf("%f", &alturaB);

    if(baseA==alturaA || baseB==alturaB){
        printf("Os dados informados nao formam o retangulo A ou o retangulo B!");
    } else if((baseA*alturaA)>(baseB*alturaB)){
        printf("A area do retangulo A eh: %f\n", baseA*alturaA);
        printf("A area do retangulo B eh: %f\n", baseB*alturaB);
        printf("A area do retangulo A eh maior do que a do retangulo B!");
    } else if((baseA*alturaA)<(baseB*alturaB)){
        printf("A area do retangulo A eh: %f\n", baseA*alturaA);
        printf("A area do retangulo B eh: %f\n", baseB*alturaB);
        printf("A area do retangulo B eh maior do que a do retangulo A!");
    } else {
        printf("A area do retangulo A eh: %f\n", baseA*alturaA);
        printf("A area do retangulo B eh: %f\n", baseB*alturaB);
        printf("A area do retangulo A eh igual ao do retangulo B!");
    }
}
