/**
* Implemente uma função que receba duas listas dinâmicas encadeadas
* e retorne uma terceira contendo as duas primeiras concatenadas.
* O tamanho de cada lista e os números (int) devem ser definidos
* pelo usuário. No final, o algoritmo deve imprimir os elementos
* da terceira lista.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Index {
  int number;
  struct Index *next;
} position;

typedef struct Index *list;

void insert(int n, list *l);
void concatenate(list *l1, list *l2, list *l3);

int main(void) {
  int length, number;

  list *list1 = (list *) malloc(sizeof(list));

  if (list1 != NULL)
    *list1 == NULL;

  scanf("%d", &length);

  for (int index = 0; index < length; index++){
    scanf("%d", &number);

    insert(number, list1);
  }

  list *list2 = (list *) malloc(sizeof(list));

  if (list2 != NULL)
    *list2 == NULL;

  scanf("%d", &length);

  for (int index = 0; index < length; index++){
    scanf("%d", &number);

    insert(number, list2);
  }

  list *list3 = (list *) malloc(sizeof(list));

  if (list3 != NULL){
    *list3 == NULL;
    concatenate(list1, list2, list3);
  }

  position *node3 = *list3;

  while (node3 != NULL){
    printf("%d ", node3->number);

    node3 = node3->next;
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

void concatenate(list *l1, list *l2, list *l3){
  position *node = NULL;

  node = *l1;

  while (node != NULL){
    insert(node->number, l3);
    node = node->next;
  }

  node = *l2;

  while (node != NULL){
    insert(node->number, l3);
    node = node->next;
  }
}
