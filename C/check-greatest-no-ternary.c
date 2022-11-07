#include <stdio.h>

int main()
{

    int a, b, c;

    printf("Enter three numbers = ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Greatest number is = %s", ((a > b && a > c) ? "a" :  (b > a && b > c) ? "b" : "c"));
    return 0;
}