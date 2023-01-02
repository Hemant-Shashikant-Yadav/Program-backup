#include <stdio.h>
#include "preprocessors-define-include -temp.c"

#define pi 3.14
#define circle(r) r *r

int main()
{
    printf("The value is = %d\n", value);
    printf("The value of PI is = %f\n", pi);
    printf("The area of circle with radius 5 is = %f", pi * circle(5));

    return 0;
}