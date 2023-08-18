#include <stdio.h>

#define M 5

typedef struct queue
{
    int front, rear;
    int arr[M];
} CQue;

void initiate(CQue *t)
{
    t->rear = t->front = M - 1;
    for (int i = 0; i < M; i++)
    {
        t->arr[i] = -1;
    }
}

int count(CQue *t)
{
    int count1 = 0;
    for (int i = 0; i < M; i++)
    {
        if (t->arr[i] == -1)
        {
            count1++;
        }

        /* code */
    }
    return count1;
}

void insert(CQue *t, int data)
{
    if (count(t) == 0)
    {
        printf("Overflow");
        /* code */
        return;
    }
    if (t->rear == M - 1)
    {
        t->rear = 0;
        t->arr[t->rear] = data;
        /* code */
    }
    else
    {
        ++t->rear;
        t->arr[t->rear] = data;
    }
}
void removeQ(CQue *t)
{
    if (count(t) == M)
    {
        printf("Underflow");
        /* code */
        return;
    }
    if (t->front == M - 1)
    {
        t->front = 0;
        t->arr[t->front] = -1;
        /* code */
    }
    else
    {
        ++t->front;
        t->arr[t->front] = -1;
    }
}

void diaplay(CQue *t)
{
    int i = t->front;
    if (count(t) == M)
    {
        printf("Empty queue");
        return;
    }
    if (t->front < t->rear)
    {
        for (int i = t->front + 1; i <= t->rear; i++)
        {
            /* code */
            printf("%4d", t->arr[i]);
        }
    }
    else
    {
        for (int i = t->front + 1; i < M; i++)
        {
            printf("%4d", t->arr[i]);

            /* code */
        }
        for (int i = 0; i <= t->rear; i++)
        {
            printf("%4d", t->arr[i]);
        }
    }
}

int main()
{
    CQue Q;
    int opt, data;
    initiate(&Q);

    while (1)
    {
        printf("\nQueue\n1.Insert\n2.Remove\n3.Display\n4.Exit\nChoose = ");
        scanf("%d", &opt);

        if (opt == 4)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            printf("Enter data = ");
            scanf("%d", &data);
            insert(&Q, data);
            /* code */
            break;
        case 2:
            removeQ(&Q);
            /* code */
            break;
        case 3:
            diaplay(&Q);
            /* code */
            break;
        }
    }

    return 0;
}
