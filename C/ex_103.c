/**
* Implemente uma funcao que receba DOIS elementos da lista
* estatica (tamanho 5) e os TROQUE de lugar. Apos a troca,
* deve-se imprimir os numeros da lista. Vale ressaltar que
* os elementos devem ser inseridos pelo usuario.
*/

#include <stdio.h>
#include <stdlib.h>

#define lengthArr 5

typedef struct {
  int amount;
  int arr[lengthArr];
} list;

void insert(int n, list *l);
int findIndexNumber(int n, list *l);

int main(void) {
  int number, switchN1, switchN2;
  
  list *list0 = (list *) malloc(sizeof(list));

  if (list0 != NULL)
    list0->amount == 0;

  for (int index = 0; index < lengthArr; index++){
    scanf("%d", &number);

    insert(number, list0);
  }

  scanf("%d %d", &switchN1, &switchN2);

  int indexN1 = findIndexNumber(switchN1, list0);
  int indexN2 = findIndexNumber(switchN2, list0);

  if (indexN1 >= 0 && indexN2 >= 0) {
    list0->arr[indexN1] = switchN2;
    list0->arr[indexN2] = switchN1;
  }

  for (int index = 0; index < list0->amount; index++)
    printf("%d ", list0->arr[index]);

	return 0;
}

void insert(int n, list *l) {
  if (l->amount == lengthArr)
    return;

  l->arr[l->amount] = n;
  l->amount++;
}

int findIndexNumber(int n, list *l) {
  for (int index = 0; index < l->amount; index++)
    if (l->arr[index] == n){
      return index;
    }
  
  return -1;
}
