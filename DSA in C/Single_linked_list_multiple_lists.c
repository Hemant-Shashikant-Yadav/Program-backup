#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int Data;
    struct node *Next;

} NODE;

typedef struct mlist
{
    NODE *St;
} MLIST;

void Initiate(MLIST *T)
{
    T->St = NULL;
}

NODE *Create_Node(int Data)
{
    NODE *A;
    A = (NODE *)malloc(sizeof(NODE));

    A->Data = Data;
    A->Next = NULL;

    return A;
}

void Create_List(MLIST *T)
{
    NODE *a, *b;
    int d;
    while (1)
    {
        printf("Data = ");
        scanf("%d", &d);
        if (d == 0)
        {
            break;
        }
        a = Create_Node(d);
        if (T->St == NULL)
        {
            T->St = a;
        }
        else
        {
            b = T->St;
            while (b->Next != NULL)
            {
                b = b->Next;
                /* code */
            }
            b->Next = a;
        }
    }
}

void Display(MLIST *T)
{
    NODE *a;
    a = T->St;

    if (T->St == NULL)
    {
        printf("List is empty !!!");
    }
    else
    {
        printf("List data = ");
        while (a != NULL)
        {
            printf("%4d", a->Data);
            a = a->Next;
        }
    }
}
int Count(MLIST *T)
{
    NODE *a = T->St;
    int count = 0;
    while (a != NULL)
    {
        count++;
        a = a->Next;
    }
    return count;
}

void sort(MLIST *T)
{
    NODE *a = T->St, *b, *c;
    int temp;

    while (a->Next != NULL)
    {
        c = a;
        b = a->Next;
        while (b != NULL)
        {
            if (b->Data < c->Data)
            {
                c = b;
                b = b->Next;
            }
        }
        if (a != c)
        {
            temp = a->Data;
            a->Data = c->Data;
            c->Data = temp;
        }
        a = a->Next;
    }
}

void Delete_all(MLIST *T)
{
    NODE *a = T->St;

    while (T->St != NULL)
    {
        T->St = a->Next;
        free(a);
        a = T->St;
        /* code */
    }
}

void Copy_List(MLIST *D, MLIST *S)
{
    NODE *a = S->St;
    NODE *b, *c;

    if (D->St != NULL)
    {
        Delete_all(D);
        /* code */
    }
    while (a != NULL)
    {
        b = Create_Node(a->Data);
        if (D->St == NULL)
        {
            D->St = b;
            /* code */
        }
        else
        {
            c->Next = b;
        }
        c = b;
        a = a->Next;
    }
}

int main()
{
    MLIST P, Q, R;
    int opt, Result, Data, Search, Replace;
    Initiate(&P);
    Initiate(&Q);
    Initiate(&R);

    while (1)
    {
        printf("\vLinked list menu:\n1.Create List 1.\n2.Create List 2.\n3.Display list 1.\n4.Display list 2\n5.Display list 3.\n6.Count nodes list 1.\n7.Count nodes list 2\n8.Count nodes list 3.\n9.Sort linked list 1\n10.Sort linked list 2.\n11.Delete all nodes in LL 1\n12.Delete all nodes in LL 2\n13.Exit\nSelect option = ");
        scanf("%d", &opt);

        if (opt > 10)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            Create_List(&P);
            break;
        case 2:
            Create_List(&Q);
            break;
        case 3:
            Display(&P);
            break;
        case 4:
            Display(&Q);
            break;
        case 5:
            Display(&R);
            break;
        case 6:
            printf("The number of nodes in list 1 are = %d\n", Count(&P));
            break;
        case 7:
            printf("The number of nodes nodes in list 2 are = %d\n", Count(&Q));
            break;
        case 8:
            printf("The number of nodes nodes in list 1 are = %d\n", Count(&R));
            break;
        case 9:
            sort(&P);
            break;
        case 10:
            sort(&Q);
            break;
        case 11:
            Delete_all(&P);
            break;
        case 12:
            Delete_all(&Q);
            break;

        default:
            break;
        }
    }

    return 0;
}