/**
* Implemente uma funcao para remover os N primeiros elementos
* de uma lista estatica de tamanho 5. Apos a remocao, deve-se
* imprimir o(s) numero(s) que ficou/ficaram na lista. Vale
* ressaltar que os elementos devem ser inseridos pelo usuario.
*/

#include <stdio.h>
#include <stdlib.h>

#define lengthArr 5

typedef struct {
  int amount;
  int arr[lengthArr];
} list;

void insert(int n, list *l);
void removeFromStart(list *l);

int main(void) {
  int number, removeN;
  
  list *list0 = (list *) malloc(sizeof(list));

  if (list0 != NULL)
    list0->amount == 0;

  for (int index = 0; index < lengthArr; index++){
    scanf("%d", &number);

    insert(number, list0);
  }

  scanf("%d", &removeN);

  for (int index = 0; index < removeN; index++)
    removeFromStart(list0);

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

void removeFromStart(list *l) {
  if(l->amount == 0)
    return;

  for(int index = 0; index < l->amount - 1; index++)
    l->arr[index] = l->arr[index + 1];

  l->amount--;
}
