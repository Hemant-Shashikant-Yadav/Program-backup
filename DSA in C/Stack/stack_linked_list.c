#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE;

typedef struct stack
{
    NODE *top;
} STK;

void initiate(STK *t)
{
    t->top = NULL;
}

NODE *createNode(int data)
{
    NODE *a = (NODE *)malloc(sizeof(NODE));
    a->data = data;
    a->next = NULL;
    return a;
}

void push(STK *T, int d)
{
    NODE *a = createNode(d);
    a->next = T->top;
    T->top = a;
}

void POP(STK *T)
{
    NODE *a = T->top;

    if (T->top == NULL)
    {
        printf("Underflow");
        /* code */
    }
    else
    {
        T->top = a->next;
        free(a);
    }
}

void diaplay(STK *t)
{
    NODE *a = t->top;

    if (t->top == NULL)
    {
        printf("Empty stack.");
        /* code */
    }
    else
    {
        printf("Data = ");
        while (a != NULL)
        {
            printf("%4d", a->data);
            a = a->next;
            /* code */
        }
    }
}

int main()
{
    int opt, d;
    STK p;
    initiate(&p);

    while (1)
    {
        printf("\n\nMenu\n1.Push\n2.Pop\n3.Display\n4.Exit\nOption = ");
        scanf("%d", &opt);

        if (opt == 4)
        {
            break;
        }

        switch (opt)
        {
        case 1:
            printf("Enter data = ");
            scanf("%d", &d);
            push(&p, d);
            break;
        case 2:
            POP(&p);
            break;
        case 3:
            diaplay(&p);
            break;

        default:
            break;
        }
    }

    return 0;
}