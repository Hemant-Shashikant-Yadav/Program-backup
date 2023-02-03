#include <stdio.h>

void enqueue();
void dequeue();
void traverse();
int front = -1;
int rear = -1;
int size = 5;
int queue[5] = {0};

int main()
{

    int ch;
    while (1)
    {
        printf("\n\nHII\n1.Enqueue\n2.Dequeue\n3.Traversre\n4.Exit\nEnter the choice = ");
        scanf("%d", &ch);
        if (ch == 4)
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
    if (rear == size - 1)
    {
        printf("Queue overflow !!!");
        /* code */
    }
    else
    {
        if (front == -1)
        {
            front = 0;
            rear++;
            printf("Enter element  = ");
            scanf("%d", &queue[rear]);
            /* code */
        }
        else
        {
            rear++;
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
        if (front == size)
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
        while (fronttemp == rear)
        {
            printf("%4d", queue[fronttemp]);
            fronttemp++;
            /* code */
        }
    }
}
