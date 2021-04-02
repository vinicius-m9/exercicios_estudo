/**
* Em matematica, o numero harmonico designado por Hn define-se como o
* enesimo termo da serie harmonica. Ou seja:
*
* Hn = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
*
* Implemente um algoritmo que calcule o valor de qualquer Hn.
*/

#include<stdio.h>

void main(){
    int n;
    float div, hn=0;

    scanf("%i", &n);

    for(int c=1; c<=n; c++){
        hn = hn + (float)1/c;
    }

    printf("%.1f", hn);
}
