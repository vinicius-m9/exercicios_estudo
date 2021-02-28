/**
* Faça um programa que leia um VETOR de OITO posições. Em seguida,
* leia também DOIS valores X e Y, que devem ser verificados, quaisquer
* correspondentes a duas posições no vetor. Se os valores de X e Y
* forem <0 OU >=8, a seguinte mensagem deve ser impressa: "Valor de X
* invalido!" ou "Valor de Y invalido!". Após isso, o usuário deve
* digitar novamente o VALOR correto.  Por fim, o seu algoritmo deverá
* exibir a SOMA dos valores encontrados nas respectivas posições X e Y.
*/

#include <stdio.h>

int main(void){
    int arr[8], X, Y;

    for(int index = 0; index < 8; index++)
        scanf("%i", &arr[index]);

    scanf("%i", &X);
    while(X<0 || X>7){
        printf("Valor de X invalido!\n");
        scanf("%i", &X);
    }

    scanf("%i", &Y);
    while(Y<0 || Y>7){
        printf("Valor de Y invalido!\n");
        scanf("%i", &Y);
    }

    printf("Soma eh: %i", arr[X] + arr[Y]);

    return 0;
}
