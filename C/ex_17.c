/*
Em matem�tica, o n�mero harm�nico designado por Hn define-se como o
en�simo termo da s�rie harm�nica. Ou seja:

Hn = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n

Implemente um algoritmo que calcule o valor de qualquer Hn.
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
