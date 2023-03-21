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
// Function to compute data sum from list
int Total();
// function to count number of nodes in list
int count();
// function to count number of odd data nodes in list
int Odd_Count();
// function to count number of even data nodes in list
int Even_Count();

int main()
{
    int opt, d;

    while (1)
    {
        printf("\vLinked list menu:\n1.Add at end.\n2.Add at begining.\n3.Display\n4.Total.\n5.Count nodes\n6.Count odd data nodes.\n7.Count even data nodes.\n8.Exit\nSelect option = ");
        scanf("%d", &opt);

        if (opt > 7)
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
        case 4:
            printf("The total is = %d\n", Total());
            break;
        case 5:
            printf("The number of nodes are = %d\n", count());
            break;
        case 6:
            printf("The number of odd data nodes are = %d\n", Odd_Count());
            break;
        case 7:
            printf("The number of odd data nodes are = %d\n", Even_Count());
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
int Total()
{
    int sum = 0;
    NODE *a = st;

    while (a != NULL)
    {
        sum += a->data;
        a = a->next;
    }
    return sum;
}
int count()
{
    int cnt = 0;
    NODE *a = st;

    while (a != NULL)
    {
        cnt++;
        a = a->next;
    }
    return cnt;
}
int Odd_Count()
{
    int cnt = 0;
    NODE *a = st;

    while (a != NULL)
    {
        if (a->data % 2 != 0)
        {
            cnt++;
        }

        a = a->next;
    }
    return cnt;
}
int Even_Count()
{
    int cnt = 0;
    NODE *a = st;

    while (a != NULL)
    {
        if (a->data % 2 == 0)
        {
            cnt++;
        }

        a = a->next;
    }
    return cnt;
}