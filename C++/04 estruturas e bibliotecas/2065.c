#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario
{
  int id;
  int speed;
  int remainingTime;
} Employee;

typedef struct heap
{
  Employee *employees;
  int accTime;
  int size;
} Heap;

int comparator(Employee *a, Employee *b)
{
  if (a->remainingTime == b->remainingTime)
    return a->id - b->id;

  return a->remainingTime - b->remainingTime;
}

void initializeHeap(Heap *heap)
{
  heap->employees = NULL;
  heap->size = 0;
  heap->accTime = 0;
}

void swap(Employee *a, Employee *b)
{
  Employee temp = *a;
  *a = *b;
  *b = temp;
}

// void showHeap(Heap *heap)
// {
//   for (int i = 0; i < heap->size; i++)
//   {
//     printf("%d(%d) ", heap->employees[i].id, heap->employees[i].remainingTime);
//   }
//   printf("\n");
// }

void heapifyUp(Heap *heap, int index)
{
  int parent = (index - 1) / 2;
  int comparison = comparator(
      &heap->employees[parent],
      &heap->employees[index]);

  if (parent >= 0 && comparison > 0)
  {
    swap(&heap->employees[parent], &heap->employees[index]);
    heapifyUp(heap, parent);
  }
}

void insertEmployee(Heap *heap, int id, int speed)
{
  heap->size++;

  Employee new;
  new.id = id;
  new.speed = speed;
  new.remainingTime = 0;

  heap->employees = realloc(heap->employees, heap->size * sizeof(Employee));
  heap->employees[heap->size - 1] = new;

  heapifyUp(heap, heap->size - 1);
}

void heapifyDown(Heap *heap, int index)
{
  // printf("down... at index: %d\n", index);
  int leftChild = 2 * index + 1;
  int rightChild = 2 * index + 2;
  int smallest = index;

  if (leftChild < heap->size)
  {
    int leftComparison = comparator(
        &heap->employees[leftChild],
        &heap->employees[smallest]);

    if (leftComparison < 0)
      smallest = leftChild;
  }

  if (rightChild < heap->size)
  {
    int rightComparison = comparator(
        &heap->employees[rightChild],
        &heap->employees[smallest]);

    if (rightComparison < 0)
      smallest = rightChild;
  }

  if (smallest != index)
  {
    swap(&heap->employees[index], &heap->employees[smallest]);
    heapifyDown(heap, smallest);
  }
}

void processItem(Heap *heap, int nItems)
{
  if (heap->size <= 0)
  {
    printf("Heap is empty.\n");
    return; // Indicador de erro
  }

  Employee *min = &heap->employees[0];
  // puts("----------------");
  // printf("MIN: %d (%d)\n", min->id, min->remainingTime);
  // printf("HEAP: ");
  // showHeap(heap);
  // puts("----------------");

  if (min->remainingTime != 0)
  {
    int timeToPass = min->remainingTime;
    heap->accTime += timeToPass;
    for (int i = 0; i < heap->size; i++)
    {
      heap->employees[i].remainingTime -= timeToPass;
    }
  }

  // tem algum funcionario livre
  min->remainingTime = min->speed * nItems;
  heapifyDown(heap, 0);
}

// 3 5
// 1(0) 2(0) 3(0)
// 2(0) 3(0) 1(3)
// 3(0) 1(3) 2(8)
// 1(3) 3(6) 2(8)
// 1(0) 3(3) 2(5) + 3
// 3(3) 2(5) 1(11)+ 3
// 3(3) 2(5) 1(11) + 3
// 3(0) 2(2) 1(8) + 3 + 3
// 3(15) 2(2) 1(8) + 3 + 3
// 2(2) 1(8) 3(15) + 3 + 3
// 2(0) 1(6) 3(13) + 3 + 3 + 2
// 1(0) 3(7) 2(0) + 3 + 3 + 2 + 6
// 3(7) 1(0) 2(0) + 3 + 3 + 2 + 6 + 7 = 21
// 3 4 2 11 5

// ordena (crescente) pelo tempo faltante
// depois, ordena (crescente) pelo id

// se o houver alguem disponivel
// escolhe o mais disponivel de menor id
// adiciona o item + heapifydown
// senao (liberaFuncionario)
// processa o menor tempo de processamento
// ajusta os funcionarios
// insere o novo processo no que ficou livre

// se chegou ao fim, repete o processo de liberar funcionarios
// enquanto houver algum funcionario ocupado

int main()
{
  Heap heap;
  initializeHeap(&heap);
  int N, M, i, j, k;
  scanf("%d %d", &N, &M);

  for (i = 1; i <= N; i++)
  {
    int speed;
    scanf("%d", &speed);
    insertEmployee(&heap, i, speed);
  }

  for (j = 1; j <= M; j++)
  {
    int nItems;
    scanf("%d", &nItems);
    processItem(&heap, nItems);
  }

  int remainingTimeToPass = -1;
  for (k = 0; k < heap.size; k++)
  {
    Employee *emp = &heap.employees[k];
    // printf("remaining time [0] = %d\n", emp->remainingTime);

    if (emp->remainingTime > remainingTimeToPass)
    {
      remainingTimeToPass = emp->remainingTime;
    }
  }

  heap.accTime += remainingTimeToPass;

  // printf("TOTAL TIME: %d\n", heap.accTime);
  printf("%d\n", heap.accTime);

  return 0;
}
