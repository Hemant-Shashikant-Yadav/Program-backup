#include <stdio.h>

int main()
{

    void Table();
    Table();

    return 0;
}

void Table()
{
    int i, j;

        printf("Teble = \n");
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 2; j <= 10; j++)
        {
            printf("%4d", i*j);
        }
        printf("\n");
    }
}