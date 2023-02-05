#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int data;
    struct queue *next;
};
typedef struct queue QUEUE;
QUEUE *front = NULL, *rear = NULL, *p, *q;
int size;
int count = 0;

void enqueue();
void dequeue();
void Traverse();

int main()
{

    printf("Enter size of queue = ");
    scanf("%d", &size);
    int ch;
    while (1)
    {
        printf("\n\nHII\n1.Enqueue\n2.Dequeue\n3.Traverse\n4.Remake queue\n5.Exit\nChoice = ");
        scanf("%d", &ch);
        if (ch == 5)
        {
            break;
        }
        else
        {
            switch (ch)
            {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                Traverse();
                break;
            case 4:
                printf("Enter size of queue = ");
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
void enqueue()
{
    if (count == size)
    {
        printf("Queue overflow");
    }
    else
    {
        count++;
        p = (QUEUE *)malloc(sizeof(QUEUE));
        printf("Enter data = ");
        scanf("%d", &p->data);

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
void dequeue()
{
    if (count == 0)
    {
        printf("Queue underflow");
    }
    else
    {
        count--;
        p = front;
        printf("Data Deleted = %d", p->data);
        front = front->next;
        free(p);
    }
}
void Traverse()
{
    if (front == NULL)
    {
        printf("Queue is empty !!!");
        /* code */
    }
    else
    {
        q = front;
        while (q != NULL)
        {
            printf("%d\n", q->data);
            q = q->next;
            /* code */
        }
    }
}
