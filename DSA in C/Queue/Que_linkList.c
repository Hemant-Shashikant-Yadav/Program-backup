#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE;

typedef struct queue
{
    NODE *front, *rear;
} Q;

NODE *createNode(int data)
{
    NODE *a;
    a = (NODE *)malloc(sizeof(NODE));
    a->data = data;
    a->next = NULL;
    return a;
}

void initiate(Q *t)
{
    t->front = t->rear = NULL;
}

void insert(Q *t, int data)
{
    NODE *a = createNode(data), *b;
    if (t->front == NULL)
    {
        t->front = a;
        /* code */
    }
    else
    {
        b = t->rear;
        b->next = a;
    }
    t->rear = a;
}

void removeQ(Q *t)
{
    NODE *a = t->front;
    if (t->front == NULL)
    {
        printf("\nUndeflow");
        return;
    }
    if (t->front == t->rear)
    {
        t->front = t->rear = NULL;
        /* code */
    }
    else
    {
        t->front = a->next;
    }
    free(a);
}

void display(Q *t)
{
    NODE *a = t->front;

    if (t->front == NULL)
    {
        printf("\nEmpty queue");
    }
    else
    {
        printf("Queue data = ");
        while (a != NULL)
        {
            printf("%4d", a->data);
            a = a->next;
        }
    }
}

int main()
{
    Q a;
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
            display(&a);
            break;
        }
    }

    return 0;
}