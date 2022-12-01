#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *start1 = NULL, *start2 = NULL, *start3 = NULL, *p, *q;
int num;

void create(NODE *start, int num);
void traverse(NODE *start);
void merge();
int main()
{
    int opt;
    while (1)
    {
        printf("\n\nMenu\n1.Create 1st LL\n2.Traverse 1st LL\n3.Create 2nd LL\n4.Traverse 2nd LL\n5.Merge\n6.Traverse merge\n7.Exit\n\nChoose = ");
        scanf("%d", &opt);

        if (opt == 7)
        {
            break;
        }
        else
        {
            switch (opt)
            {
            case 1:
                printf("Enter data = ");
                scanf("%d", &num);
                create(start1, num);
                break;
            case 2:
                traverse(start1);
                break;
            case 3:
                printf("Enter data = ");
                scanf("%d", &num);
                create(start2, num);
                break;
            case 4:
                traverse(start2);
                break;
            case 5:
                merge();
                break;
            case 6:
                traverse(start3);
                break;
            }
        }
    }
    return 0;
}

void create(NODE *start, int num)
{
    p = (NODE *)malloc(sizeof(NODE));
    p->data = num;
    if (start == NULL)
    {
        p->next = start;
        start = p;
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
    }
}
void merge()
{
}

void traverse(NODE *start)
{
    if (start == NULL)
    {
        printf("Linked list is empty. ");
    }
    else
    {
        q = start;
        do
        {
            printf("Data = %d\n", q->data);
            q = q->next;
        } while (q != start);
    }
}