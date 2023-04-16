#include <stdio.h>

typedef struct queue
{
    int front, rear;
    int arr[5];
} PQ;

void initiate(PQ *t)
{
    t->rear = -1;
    t->front = 0;
}

void insert(PQ *t, int d)
{
    int i = t->rear;
    if (t->rear == 4)
    {
        printf("\nOverflow");
        return;
    }
    while (i >= 0)
    {
        if (t->arr[i] > d)
        {
            t->arr[i + 1] = t->arr[i];
            /* code */
        }
        else
        {
            break;
        }
        i--;
    }
    t->arr[i + 1] = d;
    t->rear++;
}

void removeQ(PQ *t)
{

    int i = t->front;
    if (t->rear < t->front)
    {
        printf("\nUnderflow");
    }
    while (i < t->rear)
    {
        t->arr[i] = t->arr[i + 1];
        i++;
    }
    t->rear--;
}

void Display(PQ *t)
{
    int i = t->front;

    if (t->rear==-1)
    {
        printf("\nEmpty Queue");
        /* code */
    }
    else
    {
        while (i <= t->rear)
        {
            printf("%4d", t->arr[i]);
            i++;
        }
    }
}

int main()
{
 PQ a;
    int opt, data;

    initiate(&a);
    while (1)
    {
        printf("Queue\n1.insert\n2.Delete\n3.Display\n4.Exit\nchoose = ");
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
            insert(&a, data);
            break;

        case 2:
            removeQ(&a);
            break;
        case 3:
            Display(&a);
            break;
        }
    }

    return 0;
}