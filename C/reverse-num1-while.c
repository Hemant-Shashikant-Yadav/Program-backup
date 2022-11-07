#include <stdio.h>

int main()
{

    int n, dig, rev = 0, i;

    printf("Enter number = ");
    scanf("%d", &n);

    while (n>0)
    {
        dig = n % 10;
        rev =rev*10+ dig;
        n/=10;
    }

    printf("\vReversed no is = %d",rev);
    

    return 0;
}