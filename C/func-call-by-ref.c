#include<stdio.h>

int oper11(int* a , int * b);

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    oper11(&a,&b);


    return 0;
}

int oper11(int* a , int * b)
{
    *a = *a + *b;
    *b = *a - *b - *b;

    printf("%d \n %d",*a,*b);
}