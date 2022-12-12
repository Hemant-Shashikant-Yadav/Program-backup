// swaping of two numbers in function by call by value

#include <stdio.h>

int swap(int a, int b);

int main()
{
    int a, b;

    printf("Enter two numbers = ");
    scanf("%d%d", &a, &b);

    printf("The numbers before swap = %d and %d \n", a, b);
    swap(a, b);
    printf("The numbers after swap = %d and %d ", a, b);

    return 0;
}
int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}