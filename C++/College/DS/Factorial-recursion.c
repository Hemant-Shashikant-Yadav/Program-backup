#include <stdio.h>

int Fact(int n);

int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);

    int ans = Fact(n);
    printf("The factorial of number %d is %d ",n,ans);
    return 0;
}
int Fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * Fact(n - 1);
    }
}