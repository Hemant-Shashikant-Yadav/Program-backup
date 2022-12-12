#include <stdio.h>
#include <string.h>

int main()
{

    char a[50], b[50];
    int i = 0, j = 0;

    printf("Source string = ");
    gets(p);

    j = strlen(p);
    d[j--] = '\0';

    while (*(a + i) != '\0')
    {
        *(b + i) = *(a + i);
        i++;
        j--;
    }

    puts(p);
    puts(q);

    return 0;
}