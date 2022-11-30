#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *start = NULL, *last = NULL, *p, *q;
int i, loc;

void create_at_start();
void create_at_end();
void create_at_given();
void delete_at_start();
void delete_at_end();
void delete_at_given();
void traverse();
void setData();
int main()
{
    int opt;
    while (1)
    {
        printf("\n\nMenu\n1.Create at start\n2.create at end\n3.create at given\n4.delete at start\n5.delete at end\n6.delete at given\n7.Traverse\n8.Exit\n\nChoose = ");
        scanf("%d", &opt);

        if (opt == 8)
        {
            break;
        }
        else
        {
            switch (opt)
            {
            case 1:
                create_at_start();
                break;
            case 2:
                create_at_end();
                break;
            case 3:
                create_at_given();
                break;
            case 4:

                delete_at_start();
                break;
            case 5:
                delete_at_end();

                break;
            case 6:
                delete_at_given();

                break;
            case 7:
                traverse();
                break;
            }
        }
    }
    return 0;
}
void setData()
{
    printf("Enter data = ");
    p = (NODE *)malloc(sizeof(NODE));
    scanf("%d", &p->data);
}
void create_at_start()
{
    setData();
    if (start == NULL)
    {
        p->next = p;
        start = p;
        last = p;
    }
    else
    {
        p->next = start;
        start = p;
        last->next = start;
    }
}
void create_at_end()
{
    setData();
    if (start == NULL)
    {
        start = p;
        p->next = start;
    }
    else
    {
        q = start;
        do
        {
            q = q->next;
        } while (q->next != start);
        p->next = start;
        q->next = p;
        p = last;
    }
}
void create_at_given()
{
}
void delete_at_start()
{
}
void delete_at_end()
{
}
void delete_at_given()
{
}
void traverse()
{
    q = start;
    if (start == NULL)
    {
        printf("L L is empty!!!");
    }
    else
    {
        printf("Data = ");
        do
        {
            printf("%d\t", q->data);
            q = q->next;
        } while (q != start);
    }
}