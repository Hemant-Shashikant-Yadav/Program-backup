#include<stdio.h>


int main ()
{
      
    int n,mf=1;
    long int rem,res=0;

    printf("Enter the Number = ");
    scanf("%d", &n);

    while (n>0)
    {
        rem=n%2;
        res=res+rem*mf;
        mf*=10;
        n/=2;
    }
    
    printf("Binary = %ld",res);
      
    return 0; 
}