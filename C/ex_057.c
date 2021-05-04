/**
* Usando a estrutura "atleta" do exercecio anterior, implemente
* um algoritmo que LEIA os dados de QUATRO atletas e os exiba por
* ordem de IDADE, do mais velho para o mais novo.
*
* PS: Utilize a funcao scanf() para fazer a leitura do teclado.
*/

#include <stdio.h>

struct atleta {
    char nome[50];
    int idade;
    float altura;
};

int main(void){
    struct atleta at[4];

    for(int index = 0; index < 4; index++){
        scanf("%s", at[index].nome);
        scanf("%i", &at[index].idade);
        scanf("%f", &at[index].altura);
    }

    for(int index = 0; index < 4; index++)
        for(int indexAux = 0; indexAux < index; indexAux++)
            if(at[index].idade > at[indexAux].idade){
                int aux;

                aux = at[index].idade;
                at[index].idade = at[indexAux].idade;
                at[indexAux].idade = aux;
            }

    for(int index = 0; index < 4; index++)
        printf("%i\n", at[index].idade);

	return 0;
}
