#include<stdio.h>
/*Swap using regular technique and pointer
In regular when values went in fuction they wentas a copy and the original unchanged values are still in main func.
even we swapped nums in function and got output. When we will again take output in main we will get same as original.

But in pointer swap we directly send the original digits addres so the function will use original values only not the copy
so when we swap nums in func the original nums are also get swapped and when we get output in main also, we get swappwd nums.*/

int r_swap(int n1, int n2)
{
    int temp = n1;
    n1=n2;
    n2= temp;
    
    printf("num1=%d, num2=%d \n",n1,n2);
} 

int p_swap(int* n1, int* n2)
{
    int temp=*n1;
    *n1 = *n2;
    *n2 = temp;
    printf("num1=%d, num2=%d \n",*n1,*n2);
}

int main(int argc, char const *argv[])
{
    int num1 = 10, num2 = 20;

    r_swap(num1,num2);
    printf("num1=%d, num2=%d \n",num1,num2);
     
    p_swap(&num1,&num2);
    printf("num1=%d, num2=%d \n",num1,num2);

    return 0;
}
