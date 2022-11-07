// febonacci

#include <stdio.h>
int febona(int a, int b, int n);
int main()
{
    int n, a = 0, b = 1;

    printf("Enter the number of febonacci series you want = ");
    scanf("%d", &n);

    printf("The fibonacci series is = %d %d ", a, b);
    febona(a, b, n-2);
    return 0;
}

int febona(int a, int b, int n)
{
    int  c;

    if (n == 0)
    {
        return 0;
    }
    else
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d ",c);
        return 1 * febona(a, b, n - 1);
    }
}