#include <stdio.h>

int main()
{

    int x[4][3];
    int i, j;

    printf("Enter data = ");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
    printf("Matrix \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", x[i][j]);
        }
        printf("\n");
    }

    return 0;
}