#include <stdio.h>

int main(int argc, char const *argv[])
{
    int row, col;
    printf("Enter the number of rows and colums =");
    scanf("%d %d", &row, &col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
