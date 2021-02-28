/**
* Implemente um algoritmo que mostre uma contagem regressiva na tela,
* iniciando em NUM e terminando em 0. Vale ressaltar que NUM � definido
* pelo usu�rio e deve ser >=0, sendo que o programa deve ser finalizado
* SOMENTE quando o usu�rio digitar o NUM>=0. Al�m disso, uma mensagem
* "O numero deve ser >=0!" deve ser impressa, caso NUM<0. Por fim, uma
* mensagem �FIM!� ser� mostrada ap�s a contagem.
*/

#include<stdio.h>

void main(){
    int NUM;

    scanf("%i", &NUM);

    while(NUM<0){
        printf("O numero deve ser >=0!\n");
        scanf("%i", &NUM);
    }

    for(int c=NUM; c>=0; c--){
        printf("%i\n", c);
    }
    printf("FIM!");
}
