#include <stdio.h>

#define M 5

typedef struct queue
{
    int front, rear;
    int arr[M];
} Que;

void initiate(Que *t)
{
    t->rear = -1;
    t->front = 0;
}

void insert(Que *t, int data)
{
    if (t->rear == M - 1)
    {
        printf("Overflow");
        /* code */
    }
    else
    {
        t->rear++;
        t->arr[t->rear] = data;
    }
}

void removeQ(Que *t)
{
    if (t->rear < t->front)
    {
        printf("Umderflow");
    }
    else
    {
        t->front++;
    }
}

void diaplay(Que *t)
{
    if (t->rear<t->front)
    {printf("Empty queue");
        /* code */
    }
    else{
        printf("Data = ");
        for (int i = t->front; i <= t->rear; i++)
        {
            printf("%4d",t->arr[i]);
            /* code */
        }
        
    }
}

int main()
{
    Que Q;
    int opt, data;
    initiate(&Q);

    while (1)
    {
        printf("\nQueue\n1.Insert\n2.Remove\n3.Display\n4.Exit\nChoose = ");
        scanf("%d",&opt);

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

