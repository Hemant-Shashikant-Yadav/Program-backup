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

int main()
{
    MARKS P;
    RESULT Q;

    input(&P);
    display(&P);
    convert(% Q, % P);
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