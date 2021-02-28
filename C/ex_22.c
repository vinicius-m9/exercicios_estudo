/**
* Implemente uma fun��o para VERIFICAR se um n�mero � um quadrado perfeito.
* Um quadrado perfeito � um n�mero inteiro n�o negativo que pode ser expresso
* como o quadrado de outro n�mero inteiro. Exemplos: 1, 4, 9.
*
* Se um n�mero for um quadrado perfeito, a seguinte mensagem ser� impressa:
* "Eh um quadrado perfeito!". Caso contr�rio, deve-se imprimir: "Nao eh um
* quadrado perfeito!".
*/

#include<stdio.h>
#include<math.h>

void verification(int N){
    for(int num=1; num<=(N/2); num++){
        if(pow(num,2)==N){
            printf("Eh um quadrado perfeito!");
            return;
        }
    }
    printf("Nao eh um quadrado perfeito!");
}

void main(){
    int N;

    scanf("%i", &N);

    verification(N);
}
