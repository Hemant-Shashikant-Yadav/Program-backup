// swapping two numbers in function using call by referance

#include <stdio.h>

int swap(int *a, int *b);
int main()
{

    int a, b;

    printf("Enter the two numbers = ");
    scanf("%d%d", &a, &b);

    printf("The values before swap are %d and %d \n", a, b);
    swap(&a, &b);
    printf("The numbers after swap = %d and %d ", a, b);
    return 0;
}
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

    return *a, *b;
}