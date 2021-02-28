/**
* Faça um programa que LEIA uma string com 8 caracteres e IMPRIMA
* as quatro primeiras letras dela. O algoritmo deve imprimir na
* tela, se a string NÂO tiver 8 caracteres, a quantidade de caractere(s)
* digitada, mostrando a seguinte mensagem: "Voce digitou uma string com
* X caractere(s)!", sendo X a quantidade de caracteres digitada. Além
* disso, um ALERTA deve ser impresso e o usuário deve digitar NOVAMENTE
* a string: "A string deve ter 8 caracteres. Por favor, digite uma nova
* string:", caso o usuário NÃO respeitar a quantidade solicitada.
*
* Utilize a função scanf() para ler os caracteres do teclado.
*/

#include <stdio.h>
#include <string.h>

int main(void){
    char str[9];

    scanf("%s", str);
    while(strlen(str) != 8){
        int length = 0;

        for(int index = 0; str[index] != '\0'; index++)
            length += 1;

        printf("Voce digitou uma string com %i caractere(s)!\n", length);
        printf("A string deve ter 8 caracteres. Por favor, digite uma nova string: ");

        scanf("%s", str);
    }

    for(int index = 0; index < 4; index++)
        printf("%c", str[index]);

    return 0;
}
