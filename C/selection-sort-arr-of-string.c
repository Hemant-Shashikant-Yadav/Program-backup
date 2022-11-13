#include <stdio.h>
#include <string.h>

int main()
{

    char a[5][25], q[15];
    int i, j, pos;
    printf("Enter city names = ");
    for (i = 0; i < 5; i++)
    {
        gets(a[i]);
    }

    printf("Before sorting = ");
    for (i = 0; i < 5; i++)
    {
        puts(a[i]);
    }

    for (i = 0; i < 5; i++)
    {
        pos = i;
        for (j = 0; j < 5; j++)
        {
            if (strcmp(a[i], a[pos]) < 0)
            {
                pos = j;
            }
        }
        if (i != pos)
        {
            strcpy(q, a[i]);
            strcpy(a[i], a[pos]);
            strcpy(a[pos], q);
        }
    }
    printf("After sorting = ");
    for (i = 0; i < 5; i++)
    {
        puts(a[i]);
    }

    return 0;
}