/**
* Crie um vetor do tipo char com TAMANHO 8 e implemente um programa
* para ler uma string com ATE 5 caracteres e a IMPRIMA de TRAS para
* a FRENTE. Caso o usuario digitar uma string com MAIS de 5 caracteres,
* a seguinte mensagem deve ser impressa: "Digite novamente a string com
* ate 5 caracteres:" para que uma NOVA sequencia de caracteres seja inserida.
*
* Utilize a funcao scanf() para ler os caracteres do teclado.
*/

#include <stdio.h>
#include <string.h>

int main(void){
    char str[8];

    scanf("%s", str);
    while(strlen(str) > 5){
        printf("Digite novamente a string com ate 5 caracteres: ");
        scanf("%s", str);
    }

    for(int index = strlen(str) - 1; index >= 0; index--)
        printf("%c ", str[index]);

    return 0;
}
