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
        p->next = p;
        start = p;
        last = p;
    }
    else
    {
        q = start;
        do
        {
            q = q->next;
        } while (q->next != start);
        q->next = p;
        p->next = start;
        last = p;
    }
}
void create_at_given()
{
    setData();
    printf("Enter the location = ");
    scanf("%d", &loc);

    if (start == NULL)
    {
        if (loc == 1)
        {
            p->next = p;
            start = p;
            last = p;
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
            p->next = start;
            start = p;
            last->next = start;
        }
        else
        {
            q = start;
            i = 1;
            if (i < loc - 1)
            {
                do
                {
                    q = q->next;
                    i++;
                } while (i < loc - 1 && q != start);
            }
           
            if (q != start && q->next == start)
            {
                p->next = start;
                q->next = p;
                last = p;
            }
            else if (q != start)
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
        printf("Deletion cannot perform.");
    }
    else if (start->next == start)
    {
        p = start;
        start = NULL;
        last = NULL;
        printf("Data Deleted = %d", p->data);
        free(p);
    }
    else
    {
        p = start;
        q = last;
        start = start->next;
        q->next = start;
        printf("Data Deleted = %d", p->data);
        free(p);
    }
}
void delete_at_end()
{
    if (start == NULL)
    {
        printf("Deletion cannot perform.");
    }
    else if (start->next == start)
    {
        p = start;
        start = NULL;
        last = NULL;
        printf("Data Deleted = %d", p->data);
        free(p);
    }
    else
    {
        p = last;
        q = start;
        do
        {
            q = q->next;
        } while (q->next != p);
        q->next = start;
        last = q;
        printf("Data Deleted = %d", p->data);
        free(p);
    }
}
void delete_at_given()
{
    printf("Enter the location = ");
    scanf("%d", &loc);
    if (start == NULL)
    {
        printf("Deletion cannot perform.");
    }
    else if (start->next == start)
    {
        if (loc == 1)
        {
            p = start;
            q = last;
            start = start->next;
            q->next = start;
            printf("Data Deleted = %d", p->data);
            free(p);
        }
        else
        {
            printf("Deletion cannot perform.");
        }
    }
    else
    {
        if (loc == 1)
        {
            p = start;
            q = last;
            start = start->next;
            q->next = start;
            printf("Data Deleted = %d", p->data);
            free(p);
        }
        else
        {
            p = start;
            i = 1;
            do
            {
                q = p;
                p = p->next;
                i++;
            } while (i < loc && p != start);
            if (p != start && p->next == start)
            {
                q->next = start;
                last = q;
                printf("Data Deleted = %d", p->data);
                free(p);
            }
            else
            {
                q->next = p->next;
                printf("Data Deleted = %d", p->data);
                free(p);
            }
        }
    }
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