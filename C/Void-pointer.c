#include <stdio.h>

int main()
{
    int a = 500;
    float b = 5.098;

    void *ptr;

    ptr = &a;
    printf("The value at a is = %d\n", *((int *)ptr));
    ptr = &b;
    printf("The value at b is = %f\n", *((float *)ptr));
    return 0;
}