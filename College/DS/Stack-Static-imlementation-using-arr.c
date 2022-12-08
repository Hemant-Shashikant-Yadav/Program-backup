#include <stdio.h>

void PUSH();
void POP();
void Traverse();
void TopOfStack();
int main()
{

    int ch;
    while (1)
    {
        printf("HII\n1.Push\n2.Pop\n3.Top of stack\n4.Traverse\n5.Exit");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            PUSH();
            break;

        default:
            break;
        }
    }

    return 0;
}
