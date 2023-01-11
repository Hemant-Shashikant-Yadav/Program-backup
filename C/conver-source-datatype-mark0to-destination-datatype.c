#include <stdio.h>
#include <stdlib.h>

typedef struct marks
{
    int rollNo;
    int noOfSub;
    int *ptr;

} MARKS;

typedef struct result
{
    int rollNo;
    int total;
    float average;

} RESULT;

void input(MARKS *t);
void displayM(MARKS *t);
void display(RESULT *t);
void convert(RESULT *r, MARKS *m);

int main()
{
    MARKS P;
    RESULT Q;

    input(&P);
    displayM(&P);
    convert(&Q, &P);
    display(&Q);

    return 0;
}
void input(MARKS *t)
{
    int i = 0;
    printf("Roll no = ");
    scanf("%d", &t->rollNo);

    printf("Subject count = ");
    scanf("%d", &t->noOfSub);

    t->ptr = (int *)malloc(t->noOfSub * sizeof(int));

    while (i < t->noOfSub)
    {
        scanf("%d", (t->ptr + i));
        i++;
        /* code */
    }
}
void displayM(MARKS *t)
{
    int i = 0;
    printf("Roll no = %d\n", t->rollNo);

    printf("Marks = \n");

    while (i < t->noOfSub)
    {
        printf("%4d", *(t->ptr + i));
        i++;
        /* code */
    }
}

void display(RESULT *t)
{
    int i = 0;
    printf("Roll no = %d\n", t->rollNo);
    printf("Total marks = %d\n", t->total);
    printf("Average marks = %d\n", t->average);
}

void convert(RESULT *r, MARKS *m)
{
    int i = 0;

    r->rollNo = m->rollNo;

    r->total = 0;

    while (i < m->noOfSub)
    {
        r->total += *(m->ptr + i);
        i++;
        /* code */
    }

    r->average = (float)(r->total / m->noOfSub);
}