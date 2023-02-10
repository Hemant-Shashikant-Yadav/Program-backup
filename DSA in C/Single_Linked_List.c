#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int Data;
    struct node *Next;

} NODE;

typedef struct slist
{
    NODE *St;
    int Count;
} SLIST;

void Initiate(SLIST *T)
{
    T->St = NULL;
    T->Count = 0;
}

NODE *Create_Node(int Data)
{
    NODE *A;
    A = (NODE *)malloc(sizeof(NODE));

    A->Data = Data;
    A->Next = NULL;

    return A;
}

NODE *Get_Last_Node(SLIST *T)
{
    NODE *A;
    A = T->St;

    while (A->Next != NULL)
    {
        A = A->Next;
    }

    return A;
}

int main()
{

    return 0;
}