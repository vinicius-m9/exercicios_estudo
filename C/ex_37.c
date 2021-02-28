/**
* Crie um array de caracteres de tamanho 8, LEIA uma string do teclado
* e CONTE quantas vogais (a, e, i, o, u) ela possui. Entre com UM
* caractere (vogal ou consoante) e SUBSTITUA todas as VOGAIS da palavra
* dada por esse caractere. Ao final, imprima a NOVA string e o número
* de vogais que ela possui.
*
* Utilize a função scanf() para ler os caracteres do teclado.
*/

#include <stdio.h>
#include <ctype.h>

int main(void){
    char str[8], vowels[6] = "AEIOU";
    char letter;
    int count = 0;

    scanf("%s", str);

    scanf(" %c", &letter);

    for(int index = 0; str[index] != '\0'; index++)
        for(int i = 0; vowels[i] != '\0'; i++)
            if(toupper(str[index]) == vowels[i]){
                str[index] = letter;
                count++;
            }

    printf("A string possui %i vogais.\n", count);

    for(int index = 0; str[index] != '\0'; index++)
        printf("%c", str[index]);

    return 0;
}
