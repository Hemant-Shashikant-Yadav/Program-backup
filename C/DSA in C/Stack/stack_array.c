#include <stdio.h>

#define M 5

typedef struct
{
    int top;
    int Arr[M];
} STK;

void init(STK *t)
{
    t->top = -1;
}

void Push(STK *t, int d)
{
    if (t->top == M - 1)
    {
        printf("Stack Overflow.");
        /* code */
    }
    else
    {
        t->top++;
        t->Arr[t->top] = d;
    }
}
void Pop(STK *t)
{
    if (t->top)
    {
        printf("Stack Underflow.");
        /* code */
    }
    else
    {
        t->top--;
    }
}
void Display(STK *t)
{
    int i = t->top;
    if (t->top == -1)
    {
        printf("Empty stack.");
    }
    else
    {
        printf("Data = \n");
        while (i >= 0)
        {
            printf("%d\n", t->Arr[i--]);
        }
    }
}

int main()
{
    int opt, d;
    STK P;
    init(&P);

    while (1)
    {
        printf("\nMenu\n1.Push\n2.Pop\n3.Display.\n4.Exit\nOption = ");

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
            Push(&P, d);
            break;

        case 2:
            Pop(&P);
            break;

        case 3:
            Display(&P);
            break;

        default:
            break;
        }
    }

    return 0;
}