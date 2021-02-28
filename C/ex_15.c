/**
* Implemente um algoritmo que leia um Código de Operação:
*
* 1: soma dois números (a + b);
* 2: soma três números (a + b + c);
* 3: multiplicação de dois números (a * b);
* 0: sair.
*
* Se o usuário digitar a operação SAIR (0), o programa mostra o MENOR
* resultado obtido, considerando SOMENTE as operações realizadas, e ENCERRA.
* Entretanto, caso NENHUM Código de Operação seja selecionado, a seguinte
* mensagem deve ser impressa: "Nenhum calculo foi realizado!". Caso contrário,
* solicitará a ENTRADA dos números (a e b OU a, b e c) e imprimirá o resultado
* da operação (soma ou multiplicação). Após isso, o programa volta a SOLICITAR
* o Código de Operação para o usuário digitar uma NOVA OPERAÇÃO.
*/

#include<stdio.h>

void main(){
    int n, a, b, c, result, cont=-1, lowestResult;

    do{
        printf("1: soma dois números (a + b);\n2: soma três números (a + b + c);\n3: multiplicação de dois números (a * b);\n0: sair.\n");
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
