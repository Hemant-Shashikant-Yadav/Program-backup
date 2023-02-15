#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
};
typedef struct stack STACK;
STACK *top = NULL, *p;

void PUSH(int data);
void POP();

int main()
{

    int Testcase;

    scanf("%d", &Testcase);

    while (Testcase--)
    {
        int No_of_Bags, Itration, Sum = 0, Count = 0;
        scanf("%d %d", &No_of_Bags, &Itration);

        int *D = (int *)malloc(No_of_Bags * sizeof(int));

        for (int i = 0; i < No_of_Bags; i++)
        {
            scanf("%d", D);
            D++;
        }
        D -= No_of_Bags;

        while (Itration--)
        {
            for (int i = 0; i < No_of_Bags; i++)
            {
                if (Count == 0)
                {
                    Count++;
                    int data = *(D + i);
                    PUSH(data);
                }
                else
                {
                    if (top->data < D[i])
                    {
                        Count = i;
                        POP();
                        int data = *(D + i);
                        PUSH(data);
                    }
                }
            }

            *(D + Count) /= 2;

            Sum += top->data;
            Count = 0;
        }

        printf("%4d", Sum);
        free(D);
    }

    return 0;
}

void PUSH(int data)
{
    p = (STACK *)malloc(sizeof(STACK));
    p->data = data;

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
void POP()
{
    p = p->next;
    top = p;
}
