#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int data;
    struct queue *next;
};
typedef struct queue QUEUE;
QUEUE *front = NULL, *rear = NULL, *p, *q;
int size = 10;
int count1 = 0;

int count = 0;
int cycle = 0;
void enqueue(int data);
int dequeue();
int check1(int m, int n, int a[][3]);

int main()
{
    int a[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the elements of grid a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf(" The matrix is as follows :\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    //
    while (1)
    {
        int ch = check1(3, 3, a);
        if (ch == 0)
        {
            break;
            /* code */
        }

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {

                if (a[i][j] == 2)
                {
                    enqueue(i);
                    enqueue(j);
                    /* enqueue */
                    count++;
                }
            }
        }

        while (count--)
        {
            /* dequ */
            int i = dequeue();
            int j = dequeue();
            int b = 1;
            int *flag = &b;
            int c = 2;
            int *flag2 = &c;

            if (a[i + 1][j] == 1)
            {
                a[i + 1][j] = 2;
            }
            if (a[i - 1][j] == 1)
            {
                a[i - 1][j] = 2;
            }
            if (a[i][j + 1] == 1)
            {
                a[i][j + 1] = 2;
            }
            if (a[i][j - 1] == 1)
            {
                a[i][j - 1] = 2;
            }

            // if (*(a[i + 1]) == *flag)
            // {
            //     *a[i + 1] == *flag2;
            // }
            // if (*a[i - 1] == *flag)
            // {
            //     *a[i - 1] == *flag2;
            // }
            // if (*a[j - 1] == *flag)
            // {
            //     *a[j - 1] == *flag2;
            // }
            // if (*a[j + 1] == *flag)
            // {
            //     *a[j + 1] == *flag2;
            // }
            cycle++;
        }
        printf(" The matrix is as follows :\n");

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
    }
    printf("Number of cycles requires are = %d", cycle);
    //
    /*traverse array
    check if any 1 is present*/
}

// /make function/
void enqueue(int data)
{ // create at end
    printf("Enque");
    if (count1 == size)
    {
        printf("Queue overflow");
    }
    else
    {
        count1++;
        p = (QUEUE *)malloc(sizeof(QUEUE));
        p->data - data;

        if (front == NULL)
        {
            p->next = NULL;
            front = p;
            rear = p;
        }
        else
        {
            p->next = NULL;
            rear->next = p;
            rear = p;
        }
    }
}

int dequeue()
{
    printf("deque");
    int data;
    if (count == 0)
    {
        printf("Queue underflow");
    }
    else
    {
        count1--;
        p = front;
        data = p->data;
        front = front->next;
        free(p);
    }
    return data;
}
int check1(int m, int n, int a[][3])
{
    printf("check");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == 1)
            {
                return 1;
            }
        }
    }
    return 0;
}