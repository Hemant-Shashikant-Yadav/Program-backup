#include <stdio.h>

typedef struct marks
{
    int phy, chem, math;
    /* data */
} MRK;

void input(MRK *t);
void display(MRK *t);
int total(MRK *t);

typedef struct result
{
    int rno;
    char nm[16];
    MRK m;
    /* data */
} RES;

void input(MRK *t)
{

    printf("Enter physics marks = ");
    scanf("%d", &t->phy);
    printf("Enter chemisry marks = ");
    scanf("%d", &t->chem);
    printf("Enter maths marks = ");
    scanf("%d", &t->math);
}
void display(MRK *t)
{
    printf("\nphysics marks = %d\n", t->phy);
    printf("chemisry marks = %d\n", t->chem);
    printf("maths marks = %d\n", t->math);
}
int total(MRK *t)
{
    return t->phy + t->chem + t->math;
}

void inputRES(RES *a)
{
    printf("Enter Roll no = ");
    scanf("%d", &a->rno);

    printf("Enter name = ");
    scanf("%s", &a->nm);

    input(&a->m);
}

void displayRES(RES *a)
{
    printf("Enter Roll no = %d", a->rno);

    printf("Enter name = %s", a->nm);

    display(&a->m);
    printf("Total marks = %d", total(&a->m));
}

int main()
{
    RES p;
    inputRES(&p);
    displayRES(&p);
    return 0;
}