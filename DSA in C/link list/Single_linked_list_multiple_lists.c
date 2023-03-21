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
            }
            b = b->Next;
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

void Append_list(MLIST *D, MLIST *S)
{
    NODE *A = S->St;
    NODE *B = D->St;

    if (D->St != NULL)
    {
        while (B->Next != NULL)
        {
            B = B->Next;
        }
    }
    while (A != NULL)
    {
        if (D->St == NULL)
        {
            D->St = B = Create_Node(A->Data);
        }
        else
        {
            B->Next = Create_Node(A->Data);
            B = B->Next;
        }
        A = A->Next;
    }
}

void Merge(MLIST *R, MLIST *P, MLIST *Q)
{
    NODE *a = P->St, *b = Q->St, *c, *d = R->St;
    int data;

    sort(P);
    sort(Q);

    if (P->St == NULL && Q->St == NULL)
    {
        return;
    }
    if (P->St == NULL)
    {
        Copy_List(R, Q);
        /* code */
    }
    else
    {
        if (Q->St == NULL)
        {
            Copy_List(R, P);
        }
        else
        {
            while (a != NULL && b != NULL)
            {
                if (a->Data < b->Data)
                {
                    data = a->Data;
                    a = a->Next;
                }
                else
                {
                    data = b->Data;
                    b = b->Next;
                    /* code */
                }
                c = Create_Node(data);

                if (R->St == NULL)
                {
                    R->St = c;
                    /* code */
                }
                else
                {
                    d->Next = c;
                }
                d = c;
            }
            if (a == NULL)
            {
                while (b != NULL)
                {
                    c = Create_Node(b->Data);
                    d->Next = c;
                    d = c;
                    b = b->Next;
                }
            }
            else
            {
                while (a != NULL)
                {
                    c = Create_Node(a->Data);
                    d->Next = c;
                    d = c;
                    a = a->Next;
                }
                /* code */
            }
        }
    }
}

void Intersection(MLIST *R, MLIST *P, MLIST *Q)
{
    NODE *a = P->St, *b = Q->St, *c, *d = R->St;
    int data;

    sort(P);
    sort(Q);

    Delete_all(R);

    while (a != NULL && b != NULL)
    {
        if (a->Data < b->Data)
        {
            a = a->Next;
            continue;
        }
        else
        {
            if (b->Data < a->Data)
            {
                b = b->Next;
                continue;
            }
        }

        data = a->Data;
        a = a->Next;
        b = b->Next;

        c = Create_Node(data);
        if (R->St == NULL)
        {
            R->St = c;
            d = c;
            /* code */
        }
        else
        {
            d->Next = c;
            d = c;
        }
    }
}

void Union_List(MLIST *R, MLIST *P, MLIST *Q)
{
    NODE *a = P->St, *b = Q->St, *c, *d = R->St, *e, *f;
    int data;

    if (R->St != NULL)
    {
        Delete_all(R);
    }
    sort(P);
    sort(Q);

    while (a != NULL && b != NULL)
    {
        if (a->Data == b->Data)
        {
            data = a->Data;
            a = a->Next;
            b = b->Next;
        }
        else
        {
            if (a->Data < b->Data)
            {
                data = a->Data;
                a = a->Next;
            }
            else
            {
                data = b->Data;
                b = b->Next;
            }
        }

        if (R->St == NULL)
        {
            c = Create_Node(data);
            R->St = c;
            d = c;
            /* code */
        }
        else
        {
            if (d->Data == data)
            {
                continue;
            }

            c = Create_Node(data);
            d->Next = c;
            d = c;
        }

        while (b != NULL)
        {
            data = b->Data;
            if (R->St == NULL)
            {
                c = Create_Node(data);
                R->St = c;
                d = c;
            }
            else
            {
                if (d->Data == data)
                {
                    b = b->Next;
                    continue;
                }
                c = Create_Node(data);
                d->Next = c;
                d = c;
                b = b->Next;
            }
        }

        while (a != NULL)
        {
            data = a->Data;
            if (R->St == NULL)
            {
                c = Create_Node(data);
                R->St = c;
                d = c;
            }
            else
            {
                if (d->Data == data)
                {
                    a = a->Next;
                    continue;
                }
                c = Create_Node(data);
                d->Next = c;
                d = c;
                a = a->Next;
            }
        }
        /* code */
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
        printf("\vLinked list menu:\n1.Create List 1.\n2.Create List 2.\n3.Display list 1.\n4.Display list 2\n5.Display list 3.\n6.Count nodes list 1.\n7.Count nodes list 2\n8.Count nodes list 3.\n9.Sort linked list 1\n10.Sort linked list 2.\n11.Delete all nodes in LL 1\n12.Delete all nodes in LL 2\n13.Delete all nodes in LL 3\n14.Copy from P to R\n15.Copy from Q to R\n16.Append from P to R\n17.Append from Q to R\n18.Merge\n19.Intersection\n20.Union\n21.Exit\nSelect option = ");
        scanf("%d", &opt);

        if (opt > 20)
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
        case 13:
            Delete_all(&R);
            break;
        case 14:
            Copy_List(&R, &P);
            break;
        case 15:
            Copy_List(&R, &Q);
            break;
        case 16:
            Append_list(&R, &P);
            break;
        case 17:
            Append_list(&R, &Q);
            break;
        case 18:
            Merge(&R, &P, &Q);
            break;
        case 19:
            Intersection(&R, &P, &Q);
            break;
        case 20:
            Union_List(&R, &P, &Q);
            break;

        default:
            break;
        }
    }

    return 0;
}