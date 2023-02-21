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

void Delete_Given(SLIST *T, int Pos)
{
    int i = 1;
    NODE *a, *b, *c;

    if (T->Count == 0)
    {
        return;
    }
    if (Pos < 1 || Pos > T->Count)
    {
        printf("No such node exist");
        return;
    }
    if (Pos == 1)
    {
        Delete_First(T);
    }
    else
    {
        if (Pos == T->St)
        {
            Delete_Last(T);
        }
        else
        {
            b = T->St;
            while (i < Pos)
            {
                a = b;
                b = b->Next;
                i++;
            }
            c = b->Next;
            a->Next = c;
            free(b);
            T->Count--;
        }
    }
}
void Add_Given_Before(SLIST *T, int Pos, int Data)
{
    int i = 1;
    NODE *a, *b, *c;

    if (T->Count == 0)
    {
        return;
    }
    if (Pos < 1 || Pos > T->Count)
    {
        printf("No such node exist");
        return;
    }
    if (Pos == 1)
    {
        ADD_Begining(T, Data);
    }
    else
    {

        a = T->St;
        while (i < Pos)
        {
            b = a;
            a = a->Next;
            i++;
        }
        c = Create_Node(Data);
        b->Next = c;
        c->Next = a;
        T->Count++;
    }
}
void Add_Given_After(SLIST *T, int Pos, int Data)
{
    int i = 1;
    NODE *a, *b, *c;

    if (T->Count == 0)
    {
        return;
    }
    if (Pos < 1 || Pos > T->Count)
    {
        printf("No such node exist");
        return;
    }
    if (Pos == T->Count)
    {
        ADD_End(T, Data);
    }
    else
    {

        a = T->St;
        while (i <= Pos)
        {
            b = a;
            a = a->Next;
            i++;
        }
        c = Create_Node(Data);
        b->Next = c;
        c->Next = a;
        T->Count++;
    }
}

// function to searach value frim the list
int search(SLIST *T, int Data)
{
    NODE *a = T->St;

    while (a != NULL)
    {
        if (a->Data == Data)
        {
            break;
        }
        a = a->Next;
        /* code */
    }
    if (a == NULL)
    {
        return 0;
        /* code */
    }
    else
    {
        return 1;
    }
}

void Replace_search(SLIST *T, int search, int replace)
{
    NODE *a = T->St;
    while (a != NULL)
    {
        if (a->Data == search)
        {
            a->Data = replace;
        }
        a = a->Next;
    }
}
int main()
{
    SLIST P;
    int opt, Result, Data, Search, Replace;
    init(&P);

    while (1)
    {
        printf("\vLinked list menu:\n1.Add at end.\n2.Add at begining.\n3.Display\n4.Count.\n5.Total\n6.Average data.\n7.Min value.\n8.Max value\n9.Count odd data nodes.\n10.Count even data nodes.\n11.Delete First.\n12.Delete Last.\n13.Delete all.\n14.Delete i'th node\n15.Insert before\n16.Insert after\n17.Search\n18.Find replace\n19.Exit\nSelect option = ");
        scanf("%d", &opt);

        if (opt > 18)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            printf("Add data at end = ");
            scanf("%d", &Data);
            Add_End(&P, Data);
            break;
        case 2:
            printf("Add data at begining = ");
            scanf("%d", &Data);
            Add_Begining(&P, Data);
            break;

        case 3:
            Display(&P);
            break;
        case 4:
            printf("The number of nodes are = %d\n", P.Count);
            break;
        case 5:
            printf("The total is = %d\n", Total(&P));
            break;
        case 6:
            printf("The average is = %d\n", Total(&P) / P.Count);
            break;
        case 7:
            printf("The min data = %d\n", Min_data(&P));
            break;
        case 8:
            printf("The max data = %d\n", Max_data(&P));
            break;
        case 9:
            printf("The number of odd data nodes are = %d\n", Odd_Count(&P));
            break;
        case 10:
            printf("The number of eve data nodes are = %d\n", Even_Count(&P));
            break;
        case 11:
            Delete_First(&P);
            break;
        case 12:
            Delete_Last(&P);
            break;
        case 13:
            Delete_All(&P);
            break;
        case 14:
            printf("Enter node position to be deleted = ");
            scanf("%d", &Replace);
            Delete_Given(&P, Replace);
            break;
        case 15:
            printf("Enter node position to be insreted before = ");
            scanf("%d", &Replace);
            printf("The data = ");
            scanf("%d", &Data);
            Add_Given_Before(&P, Replace, Data);
            break;
        case 16:
            printf("Enter node position to be insreted after = ");
            scanf("%d", &Replace);
            printf("The data = ");
            scanf("%d", &Data);
            Add_Given_After(&P, Replace, Data);
            break;
        case 17:
            printf("Enter search value = ");
            scanf("%d", &Search);

            if (search(&P, Search == 0))
            {
                printf("Not found.");
            }
            else
            {
                printf("Found");
            }

            break;
        case 18:
            printf("Enter node position to be insreted after = ");
            scanf("%d", &Replace);
            printf("The data = ");
            scanf("%d", &Search);
            Replace_search(&P, Search, Replace);
            break;

        default:
            break;
        }
    }

    return 0;
}