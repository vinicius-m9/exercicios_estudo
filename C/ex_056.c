/**
* Crie uma estrutura representando um atleta. Essa estrutura deve
* conter o NOME do atleta, sua IDADE e ALTURA. Agora, implemente um
* algoritmo que leia os dados de QUATRO atletas, calcule e exiba os
* NOMES do atleta MAIS ALTO e do MAIS VELHO.
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
	float maisAlto;
	int indexAlto = 0;
	int maisVelho;
	int indexVelho = 0;

	for(int index = 0; index < 4; index++){
        scanf("%s", at[index].nome);
        scanf("%i", &at[index].idade);
        scanf("%f", &at[index].altura);

        if(index == 0){
            maisAlto = at[index].altura;
            maisVelho = at[index].idade;
        }else{
            if(at[index].altura > maisAlto){
                maisAlto = at[index].altura;
                indexAlto = index;
            }
            if(at[index].idade > maisVelho){
                maisVelho = at[index].idade;
                indexVelho = index;
            }
        }
	}

	printf("Mais alto: %s\n", at[indexAlto].nome);
	printf("Mais velho: %s\n", at[indexVelho].nome);

	return 0;
}
