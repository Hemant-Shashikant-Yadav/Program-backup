#include<stdio.h>

int Fibo(int n)
{
    if (n==0||n==1)
    {
        return n;
    }
    else
    {
        return (Fibo(n-1)+Fibo(n-2));
    }
    
    
}

int main()
{
    int n,i=0,a;
    printf("Enter number of terms in febonacci series = ");
    scanf("%d",&n);

    printf("The fibonacci series is = ");
    while (i<n)
    {
        a=Fibo(i);
        printf("%d ",i);
        i++;
    }
    
    return 0;
}