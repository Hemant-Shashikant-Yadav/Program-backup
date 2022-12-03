#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *start = NULL, *p, *q;
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
    p = (NODE *)malloc(sizeof(NODE));
}
void create_at_start()
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
        p->next = start;
        start = p;
    }
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
void create_at_given()
{
    printf("Enter data = ");
    setData();
    scanf("%d", &p->data);
    printf("Enter location = ");
    scanf("%d", &loc);

    if (start == NULL)
    {
        if (loc == 1)
        {
            p->next = NULL;
            start = p;
        }
        else
        {
            printf("Invalid location !!!");
            free(p);
        }
    }
    else
    {
        if (loc == 1)
        {
            p->next = start->next;
            start = p;
        }
        else
        {
            q = start;
            i = 1;
            while (i < loc - 1 && q != NULL)
            {
                q = q->next;
                i++;
            }

            if (q != NULL)
            {
                p->next = q->next;
                q->next = p;
            }
            else
            {
                printf("Invalid location !!!");
                free(p);
            }
        }
    }
}
void delete_at_start()
{
    if (start == NULL)
    {
        printf("Linked list is empty.\nDeletion can't perform !!!");
    }
    else if (start->next == NULL)
    {
        p = start;
        start = NULL;
        printf("Data deleted = %d", p->data);
        free(p);
    }
    else
    {
        p = start;
        start = start->next;
        printf("Data deleted = %d", p->data);
        free(p);
    }
}
void delete_at_end()
{
    if (start == NULL)
    {
        printf("Linked list is empty.\nDeletion can't perform !!!");
    }
    else if (start->next == NULL)
    {
        p = start;
        start = NULL;
        printf("Data deleted = %d", p->data);
        free(p);
    }
    else
    {
        p = start;
        while (p->next != NULL)
        {
            q = p;
            p = p->next;
        }
        q->next = NULL;
        printf("Data deleted = %d", p->data);
        free(p);
    }
}
void delete_at_given()
{
    printf("Enter location = ");
    scanf("%d", &loc);

    if (start == NULL)
    {
        printf("Linked list is empty.\nDeletion can't perform !!!");
    }
    else if (start->next == NULL)
    {
        if (loc == 1)
        {
            p = start;
            start = NULL;
            printf("Data deleted = %d", p->data);
            free(p);
        }
        else
        {
            printf("Invalid location.\nDeletion can't perform !!!");
        }
    }
    else
    {
        if (loc == 1)
        {
            p = start;
            start = start->next;
            printf("Data deleted = %d", p->data);
            free(p);
        }
        else
        {
            p = start;
            i = 1;
            while (i < loc && p != NULL)
            {
                q = p;
                p = p->next;
                i++;
            }
            if (p != NULL)
            {
                q->next = p->next;
                printf("Data deleted = %d", p->data);
                free(p);
            }
            else
            {
                printf("Invalid location.\nDeletion can't perform !!!");
            }
        }
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