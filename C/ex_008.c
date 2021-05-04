/**
* Faca um programa que leia os valores de a e b (float), calcule e imprima o valor da hipotenusa.
*/

#include<stdio.h>
#include<math.h>

void main(){
    float a, b;

    scanf("%f %f", &a, &b);

    printf("A hipotenusa eh: %f", sqrt(pow(a,2)+pow(b,2)));
}
