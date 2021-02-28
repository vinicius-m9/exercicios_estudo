/**
* Fa�a um programa para LER 10 n�meros diferentes a serem armazenados
* em um vetor. Os n�meros dever�o ser armazenados no vetor na ordem em
* que forem lidos, sendo que, caso o usu�rio digite um n�mero que j�
* foi digitado anteriormente, o programa dever� pedir a ele para digitar
* outro n�mero imprimindo na tela a seguinte mensagem: "Numero j� digitado!
* Digite outro numero!". Note que cada valor digitado pelo usu�rio deve
* ser pesquisado no vetor, verificando se ele existe entre os n�meros que
* j� foram fornecidos. Exiba na tela o vetor final que foi digitado.
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
