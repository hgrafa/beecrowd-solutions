#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1005

int stack[MAX_SIZE];
int queue[MAX_SIZE];
int priority_queue[MAX_SIZE];
int stack_size, queue_size, priority_queue_size;
// priority queue esta indexada em 1

void push_stack(int element)
{
  stack[stack_size++] = element;
}

int pop_stack()
{
  if (stack_size == 0)
    return -1;

  return stack[--stack_size];
}

void enqueue(int element)
{
  queue[++queue_size] = element;
}

int dequeue()
{
  if (queue_size == 0)
    return -1;

  int front = queue[1];

  for (int i = 1; i < queue_size; i++)
  {
    queue[i] = queue[i + 1];
  }

  queue_size--;
  return front;
}

void push_priority_queue(int element)
{
  priority_queue[++priority_queue_size] = element;
  int child = priority_queue_size;
  int parent = child / 2;

  while (parent > 0 && priority_queue[child] > priority_queue[parent])
  {
    int temp = priority_queue[child];
    priority_queue[child] = priority_queue[parent];
    priority_queue[parent] = temp;
    child = parent;
    parent = child / 2;
  }
}

int pop_priority_queue()
{
  if (priority_queue_size == 0)
    return -1;

  int front = priority_queue[1];
  priority_queue[1] = priority_queue[priority_queue_size];
  priority_queue_size--;

  int parent = 1;
  while (1)
  {
    int left_child = 2 * parent;
    int right_child = 2 * parent + 1;
    int largest = parent;

    if (left_child <= priority_queue_size && priority_queue[left_child] > priority_queue[largest])
    {
      largest = left_child;
    }

    if (right_child <= priority_queue_size && priority_queue[right_child] > priority_queue[largest])
    {
      largest = right_child;
    }

    if (largest == parent)
      break;

    int temp = priority_queue[parent];
    priority_queue[parent] = priority_queue[largest];
    priority_queue[largest] = temp;
    parent = largest;
  }

  return front;
}

int main()
{

  int n;
  while (scanf(" %d", &n) != EOF)
  {
    stack_size = 0;
    queue_size = 0;
    priority_queue_size = 0;
    int is_queue = 1, is_stack = 1, is_priority_queue = 1;

    while (n--)
    {
      int cmd, number;
      scanf(" %d %d", &cmd, &number);

      if (cmd == 1)
      {
        if (is_stack)
          push_stack(number);
        if (is_queue)
          enqueue(number);
        if (is_priority_queue)
          push_priority_queue(number);
      }
      else if (cmd == 2)
      {

        if (is_stack)
        {
          int top = pop_stack();
          if (top != number)
            is_stack = 0;
        }
        if (is_queue)
        {
          int front = dequeue();
          if (front != number)
            is_queue = 0;
        }
        if (is_priority_queue)
        {
          int front = pop_priority_queue();
          if (front != number)
            is_priority_queue = 0;
        }
      }
    }

    if (is_stack + is_priority_queue + is_queue == 0)
      puts("impossible");
    else if (is_stack + is_priority_queue + is_queue >= 2)
      puts("not sure");
    else if (is_stack)
      puts("stack");
    else if (is_queue)
      puts("queue");
    else if (is_priority_queue)
      puts("priority queue");
  }

  return 0;
}