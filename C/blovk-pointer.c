#include <stdio.h>
#include <stdlib.h>

int main()
{

    int(*mark)[30];
    int tot = 0, i, j, n;

    printf("Enter student count = ");
    scanf("%d", &n);

    mark = (int(*(mark))[])malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        printf("Enter mark of student %d = ", i + 1);
        for (j = 0; j < 3; j++)
        {
            scanf("%d", (*(mark + i)));
        }
    }

    printf("Data = \n");
    for (i = 0; i < n; i++)
    {
        printf("Mark of student %d = ", i + 1);
        for (j = 0; j < 3; j++)
        {
            printf("marks = %d\n", (*(mark + i)));
            tot += *(*(mark + i) + j);
        }
    }

    printf("Total marks = %d",tot);

    return 0;
}