#include <stdio.h>
#include <stdlib.h>

typedef struct Result
{
    int Roll_no;
    int mark[5];
    /* data */
} RESULT;

typedef struct node
{
    RESULT data;
    struct node *next;
} NODE;

typedef struct result_list
{
    NODE *st;
} RLIST;

void Initiate(RLIST *T)
{
    T->st = NULL;
}

// Function to search record.
NODE *Search(RLIST *T, int no)
{
    NODE *P = T->st;
    while (P != NULL)
    {
        if ((P->data).Roll_no == no)
        {
            break;
        }
        P = P->next;
    }
    return P;
}

// Function to add result record
void Add(RLIST *T)
{
    NODE *a, *b;

    int no, i;

    printf("Enter roll no = ");
    scanf("%d", &no);

    a = Search(T, no);
    if (a != NULL)
    {
        printf("Record exist.\n");
        return;
    }

    a = (NODE *)malloc(sizeof(NODE));

    a->data.Roll_no = no;
    printf("Enter marks = ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", a->data.mark + i);
    }
    a->next = T->st;
    T->st = a;
}

void Modify(RLIST *T)
{
    int no, i = 0;
    NODE *a;

    printf("Enter roll no = ");
    scanf("%d", &no);

    a = Search(T, no);

    if (a == NULL)
    {
        printf("Record not found.");
        return;
    }
    printf("Enter marks = ");
    while (i < 5)
    {
        scanf("%d", (a->data.mark) + i);
        i++;
    }
    printf("\nRecord modified.");
}

// Delete record from list
void Delete(RLIST *T)
{
    int no;
    NODE *a, *b, *c;

    printf("Enter roll no = ");
    scanf("%d", &no);

    a = T->st;
    while (a != NULL)
    {
        if (a->data.Roll_no == no)
        {
            b = a;
            a = a->next;
        }
    }

    if (a == NULL)
    {
        printf("Record not found.");
        return;
    }

    if (a->next == NULL)
    {
        b->next = NULL;
    }
    else
    {
        if (T->st == a)
        {
            T->st == a->next;
        }
        else
        {
            c = a;
            b->next = c;
        }
    }
    free(a);
}
void Display(RLIST *T)
{
    int i = 0, Total = 0;

    NODE *a = T->st;
    if (T->st == NULL)
    {
        printf("List is empty");
        return;
        /* code */
    }
    while (a != NULL)
    {
        printf("\nRoll no = %d\n", a->data.Roll_no);
        printf("Marks = \n");
        Total = 0, i = 0;
        while (i < 5)
        {
            printf("%4d", a->data.mark[i]);
            Total += a->data.mark[i];
            i++;
        }
        printf("\nTotal = %d\n", Total);
        a = a->next;
        /* code */
    }
}

int main()
{
    int opt;
    RLIST P;
    Initiate(&P);
    while (1)
    {
        printf("\vStudent marks menu:\n1.Add Data.\n2.Modify Data.\n3.Delete data\n4.Display Data.\nSelect option = ");
        scanf("%d", &opt);
        if (opt > 4)
        {
            break;
        }
        switch (opt)
        {
        case 1:
            Add(&P);
            break;
        case 2:
            Modify(&P);
            break;
        case 3:
            Delete(&P);
            break;
        case 4:
            Display(&P);
            break;

        default:
            break;
        }
    }

    return 0;
}