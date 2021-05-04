/**
* Dada uma lista dinamica encadeada (com 5 elementos), definida
* pelo usuario, contendo numeros inteiros positivos, implemente
* funcoes que calculem:
*
* a) Quantos numeros pares existem;
* b) A media da lista;
* c) O maior valor;
* d) A posicao do maior valor;
* e) A soma da lista.
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
int pairNumbers(list *l);
float listAverage(list *l);
int higherNumber(list *l);
int positionHigherNumber(list *l);
int listSum(list *l);

int main(void) {
  int number;

  list *list0 = (list *) malloc(sizeof(list));

  if (list0 != NULL)
    *list0 == NULL;

  for (int index = 0; index < length; index++){
    scanf("%d", &number);

    insert(number, list0);
  }

  printf("a) Qtd. Pares: %d\n", pairNumbers(list0));
  printf("b) Media: %.2f\n", listAverage(list0));
  printf("c) Maior: %d\n", higherNumber(list0));
  printf("d) Posicao (Maior): %d\n", positionHigherNumber(list0));
  printf("e) Soma: %d\n", listSum(list0));
  
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

int pairNumbers(list *l) {
  int numberOfPairs = 0;
  position *node = *l;

  while (node != NULL){
    if ((node->number % 2) == 0)
      numberOfPairs++;

    node = node->next;
  }

  return numberOfPairs;
}

float listAverage(list *l) {
  int sum = 0;
  position *node = *l;

  while (node != NULL){
    sum += node->number;

    node = node->next;
  }

  float average = (float) sum / 5;

  return average;
}

int higherNumber(list *l) {
  int bigger;
  position *node = *l;

  while (node != NULL){
    if (node == *l)
      bigger = node->number;
    else if (bigger < node->number)
      bigger = node->number;

    node = node->next;
  }

  return bigger;
}

int positionHigherNumber(list *l) {
  int bigger, positionBigger, currentPosition = 0;
  position *node = *l;

  while (node != NULL){
    if (node == *l) {
      bigger = node->number;
      positionBigger = currentPosition;
    }
    else if (bigger < node->number) {
      bigger = node->number;
      positionBigger = currentPosition;
    }

    currentPosition++;
    node = node->next;
  }

  return positionBigger;
}

int listSum(list *l) {
  int sum = 0;
  position *node = *l;

  while (node != NULL){
    sum += node->number;

    node = node->next;
  }
  
  return sum;
}
