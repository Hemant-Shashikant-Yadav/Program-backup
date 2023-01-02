#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
};
typedef struct stack STACK;
STACK *top = NULL, *p, *q;
int size;
int count = 0;

void PUSH();
void POP();
void Traverse();
void TopOfStack();

int main()
{

    printf("Enter size of stack = ");
    scanf("%d", &size);
    int ch;
    while (1)
    {
        printf("\n\nHII\n1.Push\n2.Pop\n3.Top of stack\n4.Traverse\n5.Remake stack\n6.Exit\nChoice = ");
        scanf("%d", &ch);
        if (ch == 6)
        {
            break;
        }
        else
        {
            switch (ch)
            {
            case 1:
                PUSH();
                break;
            case 2:
                POP();
                break;
            case 3:
                TopOfStack();
                break;
            case 4:
                Traverse();
                break;
            case 5:
                printf("Enter size of stack = ");
                scanf("%d", &size);
                break;

            default:
                printf("Invlid input !!! ");
                break;
            }
        }
    }

    return 0;
}
void PUSH()
{
    if (count == size)
    {
        printf("Stack overflow");
    }
    else
    {
        count++;
        p = (STACK *)malloc(sizeof(STACK));
        printf("Enter data = ");
        scanf("%d", &p->data);

        if (top == NULL)
        {
            p->next = NULL;
            top = p;
        }
        else
        {
            p->next = top;
            top = p;
        }
    }
}
void POP()
{
    if (count == 0)
    {
        printf("Stack underflow");
    }
    else
    {
        count--;
        printf("Data Deleted = %d", p->data);
        p = p->next;
        top = p;
    }
}
void Traverse()
{
    if (top == NULL)
    {
        printf("Stack is empty !!!");
        /* code */
    }
    else
    {
        q = top;
        while (q != NULL)
        {
            printf("%d\n", q->data);
            q = q->next;
            /* code */
        }
    }
}
void TopOfStack()
{
    printf("Top of stack = %d", top->data);
}