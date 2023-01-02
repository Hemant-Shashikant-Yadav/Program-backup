#include <stdio.h>

int main()
{

    FILE *ptr;

    ptr = fopen("file3.txt", "a");
    char str[100] = "This is the data written of file 2.";

    // 1.
    // fprintf(ptr, "%s", str);

    // 2.
    fputs(str, ptr);
    fputs("\n",ptr);
    return 0;
}