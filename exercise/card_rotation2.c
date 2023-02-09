#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define MAX_N 1001

int arr[MAX_N];

int main()
{
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  int q[MAX_N];
  int front = 0, rear = -1;

  for (int i = 1; i <= n; i++)
  {
    rear = (rear + 1) % MAX_N;
    q[rear] = i;
  }

  int i = 1;
  while (front <= rear)
  {
    int j = 0;
    while (j < i)
    {
      front = (front + 1) % MAX_N;
      q[rear] = q[front];
      rear = (rear + 1) % MAX_N;
      j++;
    }

    int x = q[front];
    front = (front + 1) % MAX_N;
    if (arr[x] != 0)
    {
      printf("-1");
      return 0;
    }
    arr[x] = i;
    i++;
  }

  for (int i = 1; i <= n; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}