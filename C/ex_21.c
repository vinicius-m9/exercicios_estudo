/**
* Escreva uma FUNÇÃO que receba por parâmetro uma temperatura em graus
* Fahrenheit e a RETORNE convertida em graus Celsius. A fórmula de
* conversão é: C = (F-32.0)*(5.0/9.0), sendo F a temperatura em
* Fahrenheit e C a temperatura em Celsius.
*
* PS: O cálculo de C deve ser arredondado para DUAS casas decimais.
*/

#include<stdio.h>

float fahrenheitToCelsius(float Fahrenheit){
    return ((Fahrenheit-32)*(float)5/9);
}

void main(){
    float F;

    scanf("%f", &F);

    printf("Temperatura convertida em celsius: %.2f", fahrenheitToCelsius(F));
}
