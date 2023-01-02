#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    char p[40];
    char *q[5];
    int i = 0, n, pos, r, j;

    while (i < 5)
    {
        printf("Enter string = ");
        gets(p);
        n = strlen(p) + 1;

        *(q + i) = (char *)malloc(n * sizeof(char));
        strcpy(q[i], p);
        i++;
    }
    printf("Before sorting string = \n");
    for (i = 0; i < 5; i++)
    {
        puts(q[i]);
    }

    for (i = 0; i < 4; i++)
    {
        pos = i;
        for (j = i + 1; j < 5; j++)
        {
            if ((strcmp(q[j], q[pos])) < 0)
            {
                pos = j;
            }
        }
        if (i != pos)
        {
            r = q[pos];
            q[pos] = q[i];
            q[i] = r;
        }
    }

    printf("After sorting string = \n");
    for (i = 0; i < 5; i++)
    {
        puts(q[i]);
        free(q[i]);
    }
    return 0;
}