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

    int t;

    scanf("%d", &t);

    while (t--)
    {
        int n, k, sum = 0, count1 = 0;
        scanf("%d %d", &n, &k);

        // int D[100];
        // for (int i = 0; i < n; i++)
        // {
        //     scanf("%d", &D[i]);
        // }
        int *D = (int *)malloc(n * sizeof(int));

        for (int i = 0; i < n; i++)
        {
            scanf("%d", D);
            D++;
        }
        D -= n;

        while (k--)
        {
            for (int i = 0; i < n; i++)
            {
                if (count1 == 0)
                {
                    count1++;
                    // int data = D[i];
                    int data = *(D + i);
                    PUSH(data);
                }
                else
                {
                    if (top->data < D[i])
                    {
                        count1 = i;
                        POP();
                        int data = *(D + i);
                        // int data = D[i];
                        PUSH(data);
                    }
                }
            }

            // D[count1] /= 2;
            *(D + count1) /= 2;

            sum += top->data;
            count1 = 0;
        }

        printf("%4d", sum);
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
