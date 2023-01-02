#include <stdio.h>

int main()
{
    int x[4][3];
    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter value at = x[%d][%d]", i, j);
            scanf("%f", (*(x + i) + j));
        }
    }

    printf("Array Data = ");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("The value at = x[%d][%d] is %d\n", i, j, (*(*(x + i) + j)));
        }
    }
    return 0;
}