/**
* SEM usar a funcao strlen(), faca um programa que LEIA uma string,
* com ate 8 caracteres, imprima cada caractere e a sua quantidade.
*
* Utilize a funcao scanf() para ler os caracteres do teclado.
*/

#include <stdio.h>

int main(void){
    char str[9];
    int count = 0;

    scanf("%s", str);

    for(int index = 0; str[index] != '\0'; index++){
        printf("%c\n", str[index]);
        count++;
    }
    printf("%i", count);

    return 0;
}
