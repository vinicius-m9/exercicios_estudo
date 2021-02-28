/**
* Implemente uma função para VERIFICAR se um número é um quadrado perfeito.
* Um quadrado perfeito é um número inteiro não negativo que pode ser expresso
* como o quadrado de outro número inteiro. Exemplos: 1, 4, 9.
*
* Se um número for um quadrado perfeito, a seguinte mensagem será impressa:
* "Eh um quadrado perfeito!". Caso contrário, deve-se imprimir: "Nao eh um
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
