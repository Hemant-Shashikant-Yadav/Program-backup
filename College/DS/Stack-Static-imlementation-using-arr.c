#include <stdio.h>

void PUSH();
void POP();
void Traverse();
void TopOfStack();
int TOP = -1;
int size;
int stack[]={0};

int main()
{

    printf("Enter size of stack = ");
    scanf("%d", &size);

    stack[size];

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
                stack[0];
                stack[size];
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
    TOP++;
    if (TOP == size)
    {
        printf("Stack overflow !!!");
        TOP--;
    }
    else
    {
        printf("Enter data = ");
        scanf("%d", &stack[TOP]);
    }
}
void POP()
{
    if (TOP == -1)
    {
        printf("Stack Underflow !!!");
    }
    else
    {
        printf("Deleted data = %d", stack[TOP]);
        TOP--;
    }
}
void Traverse()
{
    int i = 0;
    printf("Data = ");
    while (i < size)
    {
        printf("%4d", stack[i]);
        i++;
    }
}
void TopOfStack()
{
    printf("Top of stack = %d", stack[TOP]);
}