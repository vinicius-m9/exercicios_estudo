/**
* Implemente uma funcao para VERIFICAR se um numero e um quadrado perfeito.
* Um quadrado perfeito e um numero inteiro nao negativo que pode ser expresso
* como o quadrado de outro numero inteiro. Exemplos: 1, 4, 9.
*
* Se um numero for um quadrado perfeito, a seguinte mensagem sera impressa:
* "Eh um quadrado perfeito!". Caso contrario, deve-se imprimir: "Nao eh um
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
