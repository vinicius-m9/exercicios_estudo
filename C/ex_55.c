/**
* Crie uma estrutura representando um aluno de uma disciplina.
* Essa estrutura deve conter o número de matrícula do aluno, seu
* nome e as notas de três provas. Agora, escreva um programa que
* LEIA os dados de QUATRO alunos e os armazena nessa estrutura.
* Em seguida, exiba o NOME e as NOTAS do aluno que possui a MAIOR
* média geral dentre os quatro.
*
* PS: Utilize a função scanf() para fazer a leitura do teclado.
*/

#include <stdio.h>

struct aluno {
    int RA;
    char nome[50];
    float P1;
    float P2;
    float P3;
};
int main(void){
	struct aluno aluno[4];
    float melhorMedia = 0;
    int indexMelhorMedia;

	for(int index = 0; index < 4; index++){
        scanf("%i", &aluno[index].RA);
        scanf("%s", aluno[index].nome);
        scanf("%f", &aluno[index].P1);
        scanf("%f", &aluno[index].P2);
        scanf("%f", &aluno[index].P3);

        if((aluno[index].P1 + aluno[index].P2 + aluno[index].P3) / 3 > melhorMedia){
            indexMelhorMedia = index;
            melhorMedia = (aluno[index].P1 + aluno[index].P2 + aluno[index].P3) / 3;
        }
	}

	printf("%i\n", aluno[indexMelhorMedia].RA);
	printf("%s\n", aluno[indexMelhorMedia].nome);
	printf("%.1f\n", aluno[indexMelhorMedia].P1);
	printf("%.1f\n", aluno[indexMelhorMedia].P2);
	printf("%.1f\n", aluno[indexMelhorMedia].P3);

	return 0;
}
