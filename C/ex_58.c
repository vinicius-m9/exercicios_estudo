/**
* Crie uma enumeração representando os dias da semana. Agora,
* escrevaum programa que leia um valor inteiro do teclado e
* exiba o dia da semana correspondente.
*
* PS: Utilize a função scanf() para fazer a leitura do teclado.
*/

#include <stdio.h>

enum diasSemana {Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};

int main(void){
    enum diasSemana dia;
    int d;

    scanf("%d", &d);

    dia = d;

    switch(dia){
        case Domingo:
            printf("Domingo");
            break;
        case Segunda:
            printf("Segunda");
            break;
        case Terca:
            printf("Terca");
            break;
        case Quarta:
            printf("Quarta");
            break;
        case Quinta:
            printf("Quinta");
            break;
        case Sexta:
            printf("Sexta");
            break;
        case Sabado:
            printf("Sabado");
            break;
        default:
            printf("Dia invalido");
    }

	return 0;
}
