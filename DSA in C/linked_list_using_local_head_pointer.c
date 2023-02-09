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
    a->next = NULL
}
int main()
{

    return 0;
}