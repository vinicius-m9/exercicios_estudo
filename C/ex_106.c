/**
* Escreva uma funcao para verificar se DUAS listas dinamicas
* encadeadas de inteiros e com tamanho 5 sao iguais. Se iguais,
* a mensagem "Iguais!" deve ser impressa. Caso contrario,
* deve-se imprimir "Diferentes!".
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
int equalLists(list *l1, list *l2);

int main(void) {
  int number;

  list *list1 = (list *) malloc(sizeof(list));

  if (list1 != NULL)
    *list1 == NULL;

  for (int index = 0; index < length; index++) {
    scanf("%d", &number);

    insert(number, list1);
  }

  list *list2 = (list *) malloc(sizeof(list));

  if (list2 != NULL)
    *list2 == NULL;

  for (int index = 0; index < length; index++) {
    scanf("%d", &number);

    insert(number, list2);
  }

  if (equalLists(list1, list2))
    printf("Iguais!");
  else
    printf("Diferentes!");

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

int equalLists(list *l1, list *l2) {
  position *node2 = *l2, *node1 = *l1;

  while (node2 != NULL && node1 != NULL) {
    if (node1->number != node2->number)
      return 0;
    
    node1 = node1->next;
    node2 = node2->next;
  }

  return 1;
}
