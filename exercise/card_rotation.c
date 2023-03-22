#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define MAX_N 1001

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct Queue {
    Node* front;
    Node* rear;
} Queue;

Queue* createQueue() {
    Queue* q = malloc(sizeof(Queue));
    q->front = q->rear = NULL;
    return q;
}

Node* createNode(int key) {
    Node* node = malloc(sizeof(Node));
    node->data = key;
    node->next = NULL;
    return node;
}//ccccc

void enqueue(Queue* q, int key) {
    Node* temp = createNode(key);
    if (q->rear == NULL) {
        q->front = q->rear = temp;
        return;
    }
    q->rear->next = temp;
    q->rear = temp;
}

Node* dequeue(Queue* q) {
    if (q->front == NULL) {
        return NULL;
    }
    Node* temp = q->front;
    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    return temp;
}

bool isQueueEmpty(Queue* q) {
    return (q->front == NULL);
}

void freeQueue(Queue* q) {
    while (!isQueueEmpty(q)) {
        Node* temp = dequeue(q);
        free(temp);
    }
    free(q);
}

int* rotation(int n, int* res_size) {
    int* arr = calloc(MAX_N, sizeof(int));
    Queue* q = createQueue();
    for (int i = 1; i <= n; i++) {
        enqueue(q, i);
    }
    int i = 1;
    while (!isQueueEmpty(q)) {
        int j = 0;
        while (j < i) {
            int x = q->front->data;
            Node* temp = dequeue(q);
            free(temp);
            enqueue(q, x);
            j++;
        }
        int x = q->front->data;
        Node* temp = dequeue(q);
        free(temp);
        if (arr[x] != 0) {
            *res_size = 1;
            arr[0] = -1;
            freeQueue(q);
            return arr;
        }
        arr[x] = i;
        i++;
    }
    *res_size = n;
    for (int i = 1; i <= n; i++) {
        arr[i-1] = arr[i];
    }
    freeQueue(q);
    return arr;
}

int main()
{
int n;
printf("Enter the number of elements in the queue: ");
scanf("%d", &n);
int ans[n];
rotation(n, ans);

printf("Rotation order: ");
for (int i = 0; i < n; i++) {
    printf("%d ", ans[i]);
}
printf("\n");

return 0;
}