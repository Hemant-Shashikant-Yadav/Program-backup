#include <stdio.h>

int main()
{
    int a = 34;
    int *ptr = &a;

    printf("The value of pointer is = %x\n", ptr);
    printf("The value at pointer location is = %d\n\n",*ptr);
    
    ptr = NULL;

    printf("The value of pointer is = %d\n", ptr);
    printf("The value at pointer location is = %d\n",*ptr);
    //didnt work
    return 0;
}