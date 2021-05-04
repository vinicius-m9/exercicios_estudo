/**
* Implemente uma funcao para remover os N primeiros elementos
* de uma lista dinamica encadeada de tamanho 5. Apos a remocao,
* deve-se imprimir o(s) numero(s) que ficou/ficaram na lista.
* Vale ressaltar que os elementos devem ser inseridos pelo usuario.
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
void removeFromStart(list *l);

int main(void) {
  int number, removeN;

  list *list0 = (list *) malloc(sizeof(list));

  if (list0 != NULL)
    *list0 == NULL;

  for (int index = 0; index < length; index++){
    scanf("%d", &number);

    insert(number, list0);
  }

  scanf("%d", &removeN);

  for (int index = 0; index < removeN; index++)
    removeFromStart(list0);

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

void removeFromStart(list *l) {
  if(*l == NULL)
    return;

  position *node = *l;
  *l = node->next;
  free(node);
}
