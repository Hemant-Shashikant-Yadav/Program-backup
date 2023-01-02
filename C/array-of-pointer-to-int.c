#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
    int nos[5];
    int *mrk[5];
    int i = 0, j = 0, tot = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter subject count of student %d = ", i + 1);
        scanf("%d", (nos + i));
        *(mrk + i) = (int *)malloc(nos[i] * sizeof(int));

        printf("Enter marks = \n");
        for (j = 0; j < *(nos + i); j++)
        {
            scanf("%d", (*(mrk + i) + j));
        }
    }

    clrscr();

    for (i = 0; i < 5; i++)
    {
        tot = 0;
        printf("\nSudent %d \nMarks = ", i + 1);
        for (j = 0; j < *(nos + i); j++)
        {
            printf("%4d", *(*(mrk + i) + j));
            tot += *(*(mrk + i) + j);
        }
        printf("\nTotal = %d", tot);
        free(*(mrk + i));
    }

    return 0;
}