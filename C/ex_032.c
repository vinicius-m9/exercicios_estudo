/**
* Faca um programa para LER 10 numeros diferentes a serem armazenados
* em um vetor. Os numeros deverao ser armazenados no vetor na ordem em
* que forem lidos, sendo que, caso o usuario digite um numero que ja
* foi digitado anteriormente, o programa devera pedir a ele para digitar
* outro numero imprimindo na tela a seguinte mensagem: "Numero ja digitado!
* Digite outro numero!". Note que cada valor digitado pelo usuario deve
* ser pesquisado no vetor, verificando se ele existe entre os numeros que
* ja foram fornecidos. Exiba na tela o vetor final que foi digitado.
*/

#include <stdio.h>

int main(void){
    int arr[10];

    for(int index = 0; index < 10; index++){
        scanf("%i", &arr[index]);

        for(int indexAux = 0; indexAux < index; indexAux++)
            if(arr[indexAux] == arr[index]){
                printf("Numero j� digitado! Digite outro numero!\n");
                scanf("%i", &arr[index]);
            }
    }

    for(int index = 0; index < 10; index++)
        printf("%i\n", arr[index]);

    return 0;
}
