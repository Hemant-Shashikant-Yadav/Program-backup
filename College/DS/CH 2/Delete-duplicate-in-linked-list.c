#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *start = NULL, *q, *p, *prevNode, *CurrentNode, *NextNode;
  
void create_at_end();
void delete_duplicate();
void traverse();
void setData();
int main()
{
    int opt;
    while (1)
    {
        printf("\n\nMenu\n1.Create \n2.Delete Duplicate\n3.Traverse\n4.Exit\nChoose = ");
        scanf("%d", &opt);

        if (opt == 4)
        {
            break;
        }
        else
        {
            switch (opt)
            {
            case 1:
                create_at_end();
                break;
            case 2:
                delete_duplicate();
                break;
            case 3:
                traverse();
                break;
            case 4:
                break;
            }
        }
    }
    return 0;
}
void setData()
{
    p = (NODE *)malloc(sizeof(NODE));
}

void create_at_end()
{
    printf("Enter data = ");
    setData();
    scanf("%d", &p->data);
    if (start == NULL)
    {
        p->next = NULL;
        start = p;
    }
    else
    {
        q = start;
        while (q->next != NULL)
        {
            q = q->next;
        }
        p->next = NULL;
        q->next = p;
    }
}

void delete_duplicate()
{

    // Working but problem comes when last two nodes are repeated
    //  NextNode = start;
    //  while (NextNode->next != NULL)
    //  {
    //      CurrentNode = NextNode;
    //      NextNode = NextNode->next;
    //      while (1)
    //      {
    //          if (NextNode->data == CurrentNode->data)
    //          {
    //              prevNode = NextNode;
    //              NextNode = NextNode->next;
    //              CurrentNode->next = NextNode;
    //              free(prevNode);
    //          }
    //          else
    //          {
    //              break;
    //          }

    //     }
    // }


    // Working But once only
    // while (1)
    // {
    //     q = start;
    //     while (q != NULL)
    //     {
    //         p = q;
    //         q = q->next;

    //         if (q->data == p->data)
    //         {
    //             p->next = q->next;
    //             free(q);
    //             break;
    //         }
    //     }
    //     if (q != NULL)
    //     {
    //         break;
    //     }
    // }

    q = start;
    while (q->next != NULL)
    {
        if (q->data == q->next->data)
        {
            q->next = q->next->next;
        }
        else
        {
            q = q->next;
        }
    }
}

void traverse()
{
    if (start == NULL)
    {
        printf("Linked list is empty. ");
    }
    else
    {
        q = start;
        while (q != NULL)
        {
            printf("Data = %d\n", q->data);
            q = q->next;
        }
    }
}