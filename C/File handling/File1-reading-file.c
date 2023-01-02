#include <stdio.h>

int main()
{
    char str[100];
    FILE *ptr = NULL;

    ptr = fopen("file1.txt", "r");
    // 1.
    // fscanf(ptr, "%s", str);
    // printf("Content of file is = %s", str);

    // 2.
    while (fgets(str, 100, ptr) != NULL)
    {
        printf("%s", str);
    }

    // 3.
    // fgets(str, 100, ptr);
    // puts(str);
    // printf("%s", str);

    fclose(ptr);
    return 0;
}