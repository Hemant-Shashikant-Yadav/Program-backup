#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *start = NULL, *p, *q;
int key;

void create_at_end();
void traverse();
void insert(int key);

int main()
{
    int opt;
    while (1)
    {
        printf("\n\nMenu\n1.Create at end\n2.Add node.\n3.Traverse\n4.Exit\n\nChoose = ");
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
                printf("Enter the key value to insert = ");
                scanf("%d", &key);
                insert(key);
                break;

            case 3:
                traverse();
                break;
            }
        }
    }
    return 0;
}

void create_at_end()
{
    printf("Enter data = ");
    p = (NODE *)malloc(sizeof(NODE));

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

void insert(int key)
{
    p = start;
    q = (NODE *)malloc(sizeof(NODE));
    q->data = key;

    while (p != NULL)
    {
        if (key <= p->next->data)
        {
            q->next = p->next;
            p->next = q;
            break;
        }
        p = p->next;
    }
}