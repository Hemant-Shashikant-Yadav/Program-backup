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

void ADD_End(SLIST *T, int Data)
{
    NODE *a, *b;
    a = Create_Node(Data);

    if (T->St == NULL)
    {
        T->St = a;
    }
    else
    {
        b = Get_Last_Node(T);
        b->Next = a;
    }
}

void ADD_Begining(SLIST *T, int data)
{
    NODE *a;
    a = Create_Node(data);
    a->Next = T->St;
    T->St = a;

    T->Count++;
}

void Display(SLIST *T)
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

int Sum(SLIST *T)
{
    NODE *a;
    int sum = 0;
    a = T->St;

    while (a != NULL)
    {
        sum += a->Data;
        a = a->Next;
    }

    return sum;
}

int Odd_Count(SLIST *T)
{
    NODE *a;
    int Odd_Count = 0;
    a = T->St;

    while (a != NULL)
    {
        if (a->Data % 2 == 1)
        {
            Odd_Count++;
        }

        a = a->Next;
    }

    return Odd_Count;
}
int Even_Count(SLIST *T)
{
    NODE *a;
    int Even_Count = 0;
    a = T->St;

    while (a != NULL)
    {
        if (a->Data % 2 == 0)
        {
            Even_Count++;
        }

        a = a->Next;
    }

    return Even_Count;

    // return (T->Count - Odd_Count(T));
}

// Function to find maximum data from the list
int Max_data(SLIST *T)
{
    // NODE *a;
    // int Max = 0;
    // a = T->St;

    // while (a != NULL)
    // {
    //     if (a->Data > Max)
    //     {
    //         Max = a->Data;
    //     }

    //     a = a->Next;
    // }

    // return Max;

    NODE *a;
    a = T->St;
    int Max = a->Data;

    for (a = a->Next; a != NULL; a = a->Next)
    {

        if (a->Data > Max)
        {
            Max = a->Data;
        }

        a = a->Next;
    }

    return Max;
}
int Min_data(SLIST *T)
{
    // NODE *a;
    // int Min = 0;
    // a = T->St;

    // while (a != NULL)
    // {
    //     if (a->Data < Min)
    //     {
    //         Min = a->Data;
    //     }

    //     a = a->Next;
    // }

    // return Min;

    NODE *a;
    a = T->St;
    int Min = a->Data;

    for (a = a->Next; a != NULL; a = a->Next)
    {

        if (a->Data < Min)
        {
            Min = a->Data;
        }

        a = a->Next;
    }

    return Min;
}

void Delete_First(SLIST *T)
{
    NODE *A = T->St, *B;
    if (T->St == NULL)
    {
        printf("Empty list.");
        return;
    }
    T->St = A->Next;
    T->Count--;
    free(A);
}
void Delete_Last(SLIST *T)
{
    NODE *A = T->St, *B;
    if (T->St == NULL)
    {
        printf("Empty list.");
        return;
    }
    if (A->Next == NULL)
    {
        T->St = NULL;
    }
    else
    {
        while (A->Next != NULL)
        {
            B = A;
            A->Next;
        }
        B->Next = NULL;
    }

    T->Count--;
    free(A);
}

void Delete_All(SLIST *T)
{
    NODE *a, *b;

    while (a != NULL)
    {
        b = a;
        a->Next;
        free(a);
    }
    T->St = NULL;
    T->Count = 0;
    return;
}

int main()
{

    return 0;
}