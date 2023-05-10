#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE;

NODE *p[8];

NODE *createNode(int d)
{
    NODE *a;
    a = (NODE *)malloc(sizeof(NODE));
    a->next = NULL;
    return a;
}

void createList()
{
    int v;
    NODE *a, *b;
    while (1)
    {
        printf("\nVertex no = ");
        scanf("%d", &v);

        if (v == 0)
        {
            break;
        }
        p[v] = a = createNode(v);

        while (1)
        {
            scanf("%d", &v);
            if (v == 0)
            {
                break;
                /* code */
            }
            b = createNode(v);
            a->next = b;
            a = b;
        }
    }
}

void displayList()
{
    int v = 1;
    NODE *a, *b;

    while (v <= b)
    {
        printf("\nVertex no = %d", v);
        a = p[v];

        while (a != NULL)
        {
            printf("%4d", a->data);
            a = a->next;
        }
        v++;
    }
}

int main()
{
    createList();
    displayList();
    return 0;
}