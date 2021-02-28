/**
* Faça um programa para LER 10 números diferentes a serem armazenados
* em um vetor. Os números deverão ser armazenados no vetor na ordem em
* que forem lidos, sendo que, caso o usuário digite um número que já
* foi digitado anteriormente, o programa deverá pedir a ele para digitar
* outro número imprimindo na tela a seguinte mensagem: "Numero já digitado!
* Digite outro numero!". Note que cada valor digitado pelo usuário deve
* ser pesquisado no vetor, verificando se ele existe entre os números que
* já foram fornecidos. Exiba na tela o vetor final que foi digitado.
*/

#include <stdio.h>

int main(void){
    int arr[10];

    for(int index = 0; index < 10; index++){
        scanf("%i", &arr[index]);

        for(int indexAux = 0; indexAux < index; indexAux++)
            if(arr[indexAux] == arr[index]){
                printf("Numero já digitado! Digite outro numero!\n");
                scanf("%i", &arr[index]);
            }
    }

    for(int index = 0; index < 10; index++)
        printf("%i\n", arr[index]);

    return 0;
}
