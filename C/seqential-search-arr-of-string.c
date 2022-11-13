#include <stdio.h>
#include <string.h>

int main()
{

    char a[5][25], q[15];
    int i;
    printf("Enter city names = ");
    for (i = 0; i < 5; i++)
    {
        gets(a[i]);
    }

    printf("Enter searching city name = ");
    gets(q);

    for (i = 0; i < 5; i++)
    {
        if (strcmp(a[i], q) == 0)
        {
            break;
        }
    }
    if (i == 5)
    {
        printf("Not found");
    }
    else
    {
        printf("Found");
    }

    return 0;
}