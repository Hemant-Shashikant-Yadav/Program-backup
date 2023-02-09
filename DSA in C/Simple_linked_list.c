#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE;

NODE *st = NULL;

NODE *Create_Node(int d);
NODE *Get_Last_Node();
void Display();
void Add_Begining(int d);
void Add_End(int d);

int main()
{
    int opt, d;

    while (1)
    {
        printf("\vLinked list menu:\n1.Add at end.\n2.Add at begining.\n3.Display\n4.Exit\nSelect option = ");
        scanf("%d", &opt);

        if (opt > 3)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            printf("Add data at end = ");
            scanf("%d", &d);
            Add_End(d);
            break;
        case 2:
            printf("Add data at begining = ");
            scanf("%d", &d);
            Add_Begining(d);
            break;

        case 3:
            Display();
            break;

        default:
            break;
        }
    }

    return 0;
}
NODE *Create_Node(int d)
{
    NODE *a;
    a = (NODE *)malloc(sizeof(NODE));
    a->data = d;
    a->next = NULL;

    return a;
}
NODE *Get_Last_Node()
{
    NODE *a = st;

    while (a->next != NULL)
    {
        a = a->next;
    }

    return a;
}
void Display()
{
    NODE *a = st;

    if (st == NULL)
    {
        printf("Emplty list !!!");
    }
    else
    {
        printf("Data = ");
        while (a != NULL)
        {
            printf("%4d", a->data);
            a = a->next;
        }
    }
}
void Add_Begining(int d)
{
    NODE *a = Create_Node(d);
    a->next = st;
    st = a;
}
void Add_End(int d)
{
    NODE *a, *b;
    if (st == NULL)
    {
        st = Create_Node(d);
    }
    else
    {
        b = Create_Node(d);
        a = Get_Last_Node();
        a->next = b;
    }
}