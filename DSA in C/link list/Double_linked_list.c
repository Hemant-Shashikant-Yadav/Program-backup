#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *Prev;
    struct node *Next;
    int Data;
} NODE;

typedef struct Dlist
{
    NODE *st;
    NODE *ed;
} DLIST;

void Initiate(DLIST *D)
{
    D->st = NULL;
    D->ed = NULL;
}

NODE *CreatNode(int Data)
{
    NODE *A;
    A = (NODE *)malloc(sizeof(NODE));
    A->Data = Data;
    A->Next = A->Prev = NULL;
    return A;
}

void DisplayStartToEnd(DLIST *T)
{
    NODE *A = T->st;

    if (A == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        printf("Data = ");
        while (A != NULL)
        {
            printf("%4d", A->Data);
            A = A->Next;
        }
    }
}
void DisplayEndToStart(DLIST *T)
{
    NODE *A = T->ed;

    if (T->ed == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        printf("Data = ");
        while (A != NULL)
        {
            printf("%4d", A->Data);
            A = A->Prev;
        }
    }
}

void AddAtEnd(DLIST *T, int Data)
{
    NODE *a = T->ed, *b;

    b = CreatNode(Data);

    if (a == NULL)
    {
        T->st = b;
        T->ed = b;
    }
    else
    {
        a->Next = b;
        b->Prev = a;
    }
    T->ed = b;
}

void AddAtBegining(DLIST *T, int Data)
{
    NODE *a = T->st, *b;

    b = CreatNode(Data);

    if (a == NULL)
    {
        T->st = b;
        T->ed = b;
    }
    else
    {
        b->Next = a;
        a->Prev = b;
    }
    T->st = b;
}

int Count(DLIST *T)
{
    NODE *a = T->st;
    int count = 0;
    while (a != NULL)
    {
        count++;
        a = a->Next;
    }
    return count;
}

void DeleteFirst(DLIST *T)
{
    NODE *A = T->st, *B;

    if (A == NULL)
    {
        printf("List is empty");
        /* code */
    }
    else if (A->Next == NULL)
    {
        T->st = T->ed = NULL;
        free(A);
    }
    else
    {
        B = A->Next;
        T->st = B;
        B->Prev = NULL;
        free(A);
    }
}

void DeleteLast(DLIST *T)
{
    NODE *A = T->ed, *B;

    if (A == NULL)
    {
        printf("List is empty");
        /* code */
    }
    else if (A->Prev == NULL)
    {
        T->st = T->ed = NULL;
        free(A);
    }
    else
    {
        B = A->Prev;
        A->Prev=NULL;
        B->Next = NULL;
        T->ed = B;
        free(A);
    }
}

void DeleteIth(DLIST *T, int pos)
{
    NODE *A = T->st, *B, *C;
    int i, n = Count(T);

    if (A == NULL)
    {
        printf("List is empty");
        /* code */
    }
    else if (pos < 1 || pos > n)
    {
        printf("Invalid position");
    }
    else
    {
        if (pos == 1)
        {
            DeleteFirst(T);
        }
        else if (pos == n)
        {
            DeleteLast(T);
        }
        else
        {
            i = 1;
            while (i < pos)
            {
                B = A;
                A = A->Next;
                i++;
            }
            C = A->Next;
            B->Next = C;
            C->Prev = B;
            free(A);
            /* code */
        }
    }
}

void InsertBefore(DLIST *T, int pos, int Data)
{
    int i = 1, n = Count(T);
    NODE *a, *b, *c;

    if (n == 0 || pos < 1 || pos > n)
    {
        return;
        /* code */
    }
    if (pos == 1)
    {
        AddAtBegining(T, Data);
        /* code */
    }
    else
    {
        a = T->st;
        while (i < pos)
        {
            b = a;
            a = a->Next;
            i++;
        }
        c = CreatNode(Data);
        b->Next = c;
        c->Prev = b;
        c->Next = a;
        a->Prev = c;
    }
}
void InsertAfter(DLIST *T, int pos, int Data)
{
    int i = 1, n = Count(T);
    NODE *a, *b, *c;

    if (n == 0 || pos < 1 || pos > n)
    {
        return;
        /* code */
    }
    if (pos == 1)
    {
        AddAtBegining(T, Data);
        /* code */
    }
    else
    {
        a = T->st;
        while (i <= pos)
        {
            b = a;
            a = a->Next;
            i++;
        }
        c = CreatNode(Data);
        b->Next = c;
        c->Prev = b;
        c->Next = a;
        a->Prev = c;
    }
}

int main()
{
    DLIST P;
    Initiate(&P);
    int Data, Opt, Pos;

    while (1)
    {
        printf("\n\nDoubly linked list : \nMenu:\n1.Create at begining.\n2.Create at end.\n3.Display fropm start\n4.Display from end.\n5.Count nodes.\n6.Delete First.\n7.Delete Last.\n8.Delete ith.\n9.Insert before.\n10.Insert After.\n11.Exit\n Choose option = ");
        scanf("%d", &Opt);

        if (Opt == 11)
        {
            break;
        }
        switch (Opt)
        {
        case 1:
            /* code */
            printf("Enter data = ");
            scanf("%d", &Data);
            AddAtBegining(&P, Data);
            break;
        case 2:
            printf("Enter data = ");
            scanf("%d", &Data);
            AddAtEnd(&P, Data);
            /* code */
            break;
        case 3:
            DisplayStartToEnd(&P);
            /* code */
            break;
        case 4:
            DisplayEndToStart(&P);
            /* code */
            break;
        case 5:
            printf("Number of nodes in list = %d", Count(&P));
            /* code */
            break;
        case 6:
            DeleteFirst(&P);
            /* code */
            break;
        case 7:
            DeleteLast(&P);
            /* code */
            break;
        case 8:
            printf("Enter position = ");
            scanf("%d", &Pos);
            DeleteIth(&P, Pos);
            /* code */
            break;
        case 9:
            printf("Enter data = ");
            scanf("%d", &Data);
            printf("Enter position = ");
            scanf("%d", &Pos);
            InsertBefore(&P, Pos, Data);
            /* code */
            break;
        case 10:
            printf("Enter data = ");
            scanf("%d", &Data);
            printf("Enter position = ");
            scanf("%d", &Pos);
            InsertAfter(&P, Pos, Data);
            /* code */
            break;

        default:
            break;
        }
    }

    return 0;
}