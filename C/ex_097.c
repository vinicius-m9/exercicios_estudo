/**
* Implemente uma função que receba duas listas estáticas
* e retorne uma terceira contendo as duas primeiras concatenadas.
* O tamanho de cada lista e os números (do tipo int) devem ser
* definidos pelo usuário. No final, o algoritmo deve imprimir os
* elementos da terceira lista.
*
* Use: #define lengthArr 20
*/

#include <stdio.h>
#include <stdlib.h>

#define lengthArr 20

typedef struct {
  int amount;
  int arr[lengthArr];
} list;

void insert(int n, list *l);
void concatenate(list *l1, list *l2, list *l3);

int main(void) {
  int length, number;
  
  list *list1 = (list *) malloc(sizeof(list));

  if (list1 != NULL)
    list1->amount == 0;

  scanf("%d", &length);

  for (int index = 0; index < length; index++){
    scanf("%d", &number);

    insert(number, list1);
  }

  list *list2 = (list *) malloc(sizeof(list));

  if (list2 != NULL)
    list2->amount == 0;

  scanf("%d", &length);

  for (int index = 0; index < length; index++){
    scanf("%d", &number);

    insert(number, list2);
  }

  list *list3 = (list *) malloc(sizeof(list));

  if (list3 != NULL)
    concatenate(list1, list2, list3);

  for (int index = 0; index < list3->amount; index++)
    printf("%d ", list3->arr[index]);

	return 0;
}

void insert(int n, list *l) {
  if (l->amount == lengthArr)
    return;

  l->arr[l->amount] = n;
  l->amount++;
}

void concatenate(list *l1, list *l2, list *l3){
  l3->amount = 0;

  for (int index = 0; index < l1->amount; index++)
    l3->arr[l3->amount++] = l1->arr[index];

  for (int index = 0; index < l2->amount; index++)
    l3->arr[l3->amount++] = l2->arr[index];
}
