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
    NODE *St1 = NULL;
    NODE *St2 = NULL;
    int Option, Data;

    ADD_End(&St1, 2);
    ADD_End(&St1, 4);
    ADD_End(&St1, 6);
    ADD_End(&St1, 8);
    Display(&St1);

    printf("\n");

    ADD_End(&St2, 1);
    ADD_End(&St2, 3);
    ADD_End(&St2, 5);
    ADD_End(&St2, 7);
    Display(&St2);

    return 0;
}