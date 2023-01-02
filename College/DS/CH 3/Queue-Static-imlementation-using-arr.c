#include <stdio.h>

void enqueue();
void dequeue();
void traverse();
int front = -1;
int rear = -1;
int size;
int queue[] = {0};

int main()
{

    printf("Enter the size of queue = ");
    scanf("%d", &size);

    queue[size];

    int ch;
    while (1)
    {
        printf("\n\nHII\n1.Enqueue\n2.Dequeue\n3.Traversre\n4.Change size of queue\n5.Exit\nEnter the choice = ");
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
                traverse();
                break;
            case 4:
                printf("Enter the new size of queue = ");
                scanf("%d", &size);
                queue[0];
                queue[size];
                break;

            default:
                printf("You entered wrong choice !!!");
                break;
            }
        }
    }
    return 0;
}
void enqueue()
{
    rear++;
    if (rear == size-1)
    {
        printf("Queue overflow !!!");
        rear--;
        /* code */
    }
    else
    {
        if (front == -1)
        {
            front=0;
            printf("Enter element  = ");
            scanf("%d", &queue[rear]);
            /* code */
        }
        else
        {
            printf("Enter element  = ");
            scanf("%d", &queue[rear]);
            /* code */
        }
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue underflow!!!");
    }
    else
    {
        if (front == size )
        {
            printf("Queue underflow !!!");
            front--;
            /* code */
        }
        else
        {
            printf("Element  deleted = %d", queue[front]);
            front++;
        }
    }
}
void traverse()
{
    if (front == -1)
    {
        printf("Queue is empty !!!");
        /* code */
    }
    else
    {
        printf("Data = ");
        int fronttemp = front;
        while (fronttemp == rear + 1)
        {
            printf("%4d", queue[fronttemp]);
            fronttemp++;
            /* code */
        }
    }
}
