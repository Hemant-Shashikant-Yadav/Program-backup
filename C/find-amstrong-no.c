#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,r,ans=0,num,num_copy;

    printf("Enter the number = ");
    scanf("%d",&num);

    num_copy=num;
    while (num>0)
    {
        r=num%10;
        n=r*r*r;
        ans=ans+n;
        num=num/10;
    }

    if (num_copy==ans)
    {
        printf("The number is amstrong number ");
    }
    else
    {
        printf("The number is not amstrong number ");
    }
    



    return 0;
}
