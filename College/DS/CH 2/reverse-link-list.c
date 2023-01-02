#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *start = NULL, *p, *q, *k;
int i, loc;

void create_at_end();
void reverse();
void traverse();
void setData();
int main()
{
    int opt;
    while (1)
    {
        printf("\n\nMenu\n1.Create \n2.Reverse\n3.Traverse\n4.Exit\nChoose = ");
        scanf("%d", &opt);

        if (opt == 4)
        {
            break;
        }
        else
        {
            switch (opt)
            {
            case 1:
                create_at_end();
                break;
            case 2:
                reverse();
                break;
            case 3:
                traverse();
                break;
            case 4:
                break;
            }
        }
    }
    return 0;
}
void setData()
{
    p = (NODE *)malloc(sizeof(NODE));
}

void create_at_end()
{
    printf("Enter data = ");
    setData();
    scanf("%d", &p->data);
    if (start == NULL)
    {
        p->next = NULL;
        start = p;
    }
    else
    {
        q = start;
        while (q->next != NULL)
        {
            q = q->next;
        }
        p->next = NULL;
        q->next = p;
    }
}
void reverse()
{
    q = start;
    while (q->next != NULL)
    {
        q = q->next;
    }
    p = q;
    k = q;
    while (1)
    {
        if (p == start)
        {
            p->next = NULL;
            break;
        }
        else
        {
            q = start;
            while (q->next != p)
            {
                q = q->next;
            }
            p->next = q;
            p = p->next;
        }
    }
    start = k;
}

void traverse()
{
    if (start == NULL)
    {
        printf("Linked list is empty. ");
    }
    else
    {
        q = start;
        while (q != NULL)
        {
            printf("Data = %d\n", q->data);
            q = q->next;
        }
    }
}