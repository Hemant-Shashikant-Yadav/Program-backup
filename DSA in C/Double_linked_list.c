#include <stdio.h>

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
            A = A->Prev;
        }
    }
}

int main()
{

    return 0;
}