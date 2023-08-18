#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE;

NODE *Create_Node(int data)
{
    NODE *a;
    a = (NODE *)malloc(sizeof(NODE));
    a->data = data;
    a->next = NULL;
    return a;
}

// function to retrive last node
NODE *Get_Last_Node(NODE **T)
{
    NODE *a = *T;
    while (a->next != NULL)
    {
        a = a->next;
    }
    return a;
}

// Funtion to display list data
void Display(NODE **T)
{
    NODE *a = *T;

    if (a == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        printf("List data = ");
        while (a != NULL)
        {
            printf("%4d", a->data);
            a = a->next;
        }
    }
}

// Funtion to add new node at end
void ADD_End(NODE **T, int data)
{
    NODE *a, *b;
    if (*T == NULL)
    {
        *T = Create_Node(data);
    }
    else
    {
        b = Get_Last_Node(T);
        a = Create_Node(data);
        b->next = a;
    }
}
// Funtion to add new node at begining
void ADD_Begining(NODE **T, int data)
{
    NODE *a = *T, *b;

    b = Create_Node(data);
    b->next = a;
    *T = b;
}

int main()
{
    NODE *St = NULL;
    int Option, Data;

    while (1)
    {
        printf("\vLinked list menu:\n1.Add at end.\n2.Add at begining.\n3.Display\n4.Exit\nSelect option = ");
        scanf("%d", &Option);

        if (Option > 3)
        {
            break;
        }
        switch (Option)
        {
        case 1:
            printf("Add data at end = ");
            scanf("%d", &Data);
            ADD_End(&St, Data);
            break;
        case 2:
            printf("Add data at begining = ");
            scanf("%d", &Data);
            ADD_Begining(&St, Data);
            break;

        case 3:
            Display(&St);
            break;

        default:
            break;
        }
    }

    return 0;
}