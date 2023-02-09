#include <stdio.h>
#include <stdlib.h>

#define MAX 1001

int arr[MAX];

int rotation(int n) {
  int i, j, x;
  int front = 0, rear = n - 1;
  for (i = 1; i <= n; i++) {
    rear = (rear + 1) % n;
    x = arr[rear];
    for (j = 0; j < i; j++) {
      front = (front + 1) % n;
      if (front == rear) {
        return -1;
      }
      arr[rear] = arr[front];
      rear = front;
    }
    arr[rear] = x;
  }
  return 0;
}

int main() {
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    arr[i] = i + 1;
  }

  int result = rotation(n);
  if (result == -1) {
    printf("Cycle detected.\n");
    return 0;
  }

  printf("The final arrangement is: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
