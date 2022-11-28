#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next, *prev;
};
typedef struct node NODE;
NODE *start = NULL, *last = NULL, *p, *q;
int i, loc;

void setData();
void create_at_start();
void create_at_end();
void create_at_given();
void delete_at_end();
void delete_at_start();
void delete_at_given();
void traverse();

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
    scanf("%d", &p->data);
}
void create_at_start()
{
    printf("Enter Data = ");
    setData();
    if (start == NULL)
    {
        start = p;
        p->next = NULL;
        p->prev = NULL;
        last = p;
    }
    else
    {
        start->prev = p;
        p->next = start;
        start = p;
        p->prev = NULL;
    }
}
void create_at_end()
{
    printf("Enter Data = ");
    setData();
    if (start == NULL)
    {
        start = p;
        p->next = NULL;
        p->prev = NULL;
        last = p;
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
        p->prev = q;
        last = p;
    }
}
void create_at_given()
{
    printf("Enter Data = ");
    setData();

    printf("Enter a location = ");
    scanf("%d", &loc);
    if (start == NULL)
    {
        if (loc == 1)
        {
            p->next = NULL;
            p->prev = NULL;
            p = start;
        }
        else
        {
            printf("Invalid location.");
            free(p);
        }
    }
    else
    {
        if (loc == 1)
        {
            start->prev = p;
            p->next = start;
            start = p;
            p->prev = NULL;
            last = p;
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

            if (q != NULL && q->next == NULL)
            {
                p->next = NULL;
                q->next = p;
                p->prev = q;
                last = p;
            }
            else if (q != NULL)
            {
                q->next->prev = p;
                p->next = q->next;
                p->prev = q;
                q->next = p;
            }
            else
            {
                printf("Invalid location.");
                free(p);
            }
        }
    }
}

void delete_at_start()
{
    if (start == NULL)
    {
        printf("Linkled list is empty. \nDeletion can't perform. !!!");
    }
    else
    {
        if (start->next == NULL)
        {
            p = start;
            start == NULL;
            last = NULL;
            printf("Deleted data = %d", p->data);
            free(p);
        }
        else

        {
            p = start;
            start = start->next;
            start->prev = NULL;
            printf("Deleted data = %d", p->data);
            free(p);
        }
    }
}
void delete_at_end()
{
    if (start == NULL)
    {
        printf("Linkled list is empty. \nDeletion can't perform. !!!");
    }
    else
    {
        if (start->next == NULL)
        {
            p = start;
            start == NULL;
            last = NULL;
            printf("Deleted data = %d", p->data);
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
            last = q; 
            printf("Deleted data = %d", p->data);
            free(p);
        }
    }
}
void delete_at_given()
{
    printf("Enter location = ");
    scanf("%d", &loc);

    if (start == NULL)
    {
        printf("Linkled list is empty. \nDeletion can't perform. !!!");
    }
    else if (start->next == NULL)
    {
        if (loc == 1)
        {
            p = start;
            start = NULL;
            last = NULL;
            printf("Data deleted = %d", p->data);
            free(p);
        }
        else
        {
            printf("Invalid location.");
        }
    }
    else
    {
        if (loc == 1)
        {
            p = start;
            start->next->prev = NULL;
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

            if (p != NULL && p->next == NULL)
            {
                q->next = NULL;
                last = q;
                printf("Data deleted = %d", p->data);
                free(p);
            }
            else if (p != NULL)
            {
                q->next = p->next;
                p->next->prev = q;
                printf("Data deleted = %d", p->data);
                free(p);
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