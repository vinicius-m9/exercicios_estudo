/*
* Crie uma funcao que receba uma string (tamanho 6), INVERTA os
* elementos da string e RETORNE o PONTEIRO para essa string
* invertida. Por fim, na funcao main(), os elementos da string
* invertida devem ser impressos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* invertString(char *str);

int main(void){
  char str[6], *pStr = NULL;

  scanf("%s", str);

  pStr = invertString(str);

  for(int index = 0; index < strlen(str); index++)
    printf("%c ", *(pStr + index));

	return 0;
}

char* invertString(char *str){
  char *p = (char *) malloc(strlen(str) * sizeof(char));

  for(int index = 0; str[index] != '\0'; index++)
    *(p + index) = str[strlen(str) - 1 - index];

  return p;
}
