/**
* Implemente um algoritmo que leia um Codigo de Operacao:
*
* 1: soma dois numeros (a + b);
* 2: soma tres numeros (a + b + c);
* 3: multiplicacao de dois numeros (a * b);
* 0: sair.
*
* Se o usuario digitar a operacao SAIR (0), o programa mostra o MENOR
* resultado obtido, considerando SOMENTE as operacoes realizadas, e ENCERRA.
* Entretanto, caso NENHUM Codigo de Operacao seja selecionado, a seguinte
* mensagem deve ser impressa: "Nenhum calculo foi realizado!". Caso contrario,
* solicitara a ENTRADA dos numeros (a e b OU a, b e c) e imprimira o resultado
* da operacao (soma ou multiplicacao). Apos isso, o programa volta a SOLICITAR
* o Codigo de Operacao para o usuario digitar uma NOVA OPERACAO.
*/

#include<stdio.h>

void main(){
    int n, a, b, c, result, cont=-1, lowestResult;

    do{
        printf("1: soma dois n�meros (a + b);\n2: soma tr�s n�meros (a + b + c);\n3: multiplica��o de dois n�meros (a * b);\n0: sair.\n");
        scanf("%i", &n);

        if(n==1){
            scanf("%i %i", &a, &b);
            result = a+b;
            printf("(a+b) = %i\n", result);
        }else if(n==2){
            scanf("%i %i %i", &a, &b, &c);
            result = a+b+c;
            printf("(a+b+c) = %i\n", result);
        } else if(n==3){
            scanf("%i %i", &a, &b);
            result = a*b;
            printf("(a*b) = %i\n", result);
        }

        if(cont == -1){
            lowestResult = result;
        }else if(result<lowestResult){
            lowestResult = result;
        }

        cont++;
    }while(n!=0);

    if(cont>0){
        printf("Menor resultado: %i", lowestResult);
    } else {
        printf("Nenhum calculo foi realizado!");
    }
}
