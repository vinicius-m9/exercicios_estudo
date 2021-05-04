/**
* Implemente uma funcao que receba a POSICAO de dois elementos
* da lista dinamica encadeada (tamanho 5) e os TROQUE de lugar.
* Apos a troca, deve-se imprimir os numeros da lista. Vale
* ressaltar que os elementos devem ser inseridos pelo usuario.
*/

#include <stdio.h>
#include <stdlib.h>

#define length 5

typedef struct Index {
  int number;
  struct Index *next;
} position;

typedef struct Index *list;

void insert(int n, list *l);
int findNumber(int p, list *l);
void switchNumber(int n, int p, list *l);

int main(void) {
  int number, position1, position2;

  list *list0 = (list *) malloc(sizeof(list));

  if (list0 != NULL)
    *list0 == NULL;

  for (int index = 0; index < length; index++){
    scanf("%d", &number);

    insert(number, list0);
  }

  scanf("%d %d", &position1, &position2);

  if (position1 > 0 && position1 < 6 && position2 > 0 && position2 < 6) {
    int number1 = findNumber(position1, list0);
    int number2 = findNumber(position2, list0);

    switchNumber(number1, position2, list0);
    switchNumber(number2, position1, list0);
  }

  position *node = *list0;

  while (node != NULL){
    printf("%d ", node->number);

    node = node->next;
  }

	return 0;
}

void insert(int n, list *l) {
  position *node = (position *) malloc(sizeof(position));

  if (node == NULL)
    return;
  
  node->number = n;
  node->next = NULL;

  if (*l == NULL){
    *l = node;
    return;
  }

  position *nodeAux = *l;

  while (nodeAux->next != NULL)
    nodeAux = nodeAux->next;
  
  nodeAux->next = node;
}

int findNumber(int p, list *l) {
  position *node = *l;

  for (int position = 1; node != NULL && position < p; position++)
    node = node->next;

  return node->number;
}

void switchNumber(int n, int p, list *l) {
  position *node = *l;

  for (int position = 1; node != NULL && position < p; position++)
    node = node->next;
  
  node->number = n;
}
