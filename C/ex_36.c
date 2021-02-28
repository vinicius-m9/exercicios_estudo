/**
* Crie um vetor do tipo char com TAMANHO 8 e implemente um programa
* para ler uma string com AT� 5 caracteres e a IMPRIMA de TR�S para
* a FRENTE. Caso o usu�rio digitar uma string com MAIS de 5 caracteres,
* a seguinte mensagem deve ser impressa: "Digite novamente a string com
* ate 5 caracteres:" para que uma NOVA sequ�ncia de caracteres seja inserida.
*
* Utilize a fun��o scanf() para ler os caracteres do teclado.
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
