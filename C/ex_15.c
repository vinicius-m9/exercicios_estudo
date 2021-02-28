/**
* Implemente um algoritmo que leia um C�digo de Opera��o:
*
* 1: soma dois n�meros (a + b);
* 2: soma tr�s n�meros (a + b + c);
* 3: multiplica��o de dois n�meros (a * b);
* 0: sair.
*
* Se o usu�rio digitar a opera��o SAIR (0), o programa mostra o MENOR
* resultado obtido, considerando SOMENTE as opera��es realizadas, e ENCERRA.
* Entretanto, caso NENHUM C�digo de Opera��o seja selecionado, a seguinte
* mensagem deve ser impressa: "Nenhum calculo foi realizado!". Caso contr�rio,
* solicitar� a ENTRADA dos n�meros (a e b OU a, b e c) e imprimir� o resultado
* da opera��o (soma ou multiplica��o). Ap�s isso, o programa volta a SOLICITAR
* o C�digo de Opera��o para o usu�rio digitar uma NOVA OPERA��O.
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
