#include <stdio.h>

int main()
{
    int a = 500;
    int *ptr; // Wild pointer
    ptr = &a;

    printf("The value of a is = %d", *ptr);

    return 0;
}