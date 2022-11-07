#include <stdio.h>

int main()
{
    int n, dig, sv;

    printf("Enter a number = ");
    scanf("%d", &n);

    do
    {
        printf("Enter a search digit = ");
        scanf("%d", &sv);
    } while (sv < 1 || sv > 9);

    while (n>0)
    {
        dig = n % 10;
        if (dig==sv)
        {
            break;
        }
        n/=10;
    }
    
    if (n==0)
    {
        printf("Search digit not found.");
    }
    else
    {
        printf("Search digit not found.");

    }
    


    return 0;
}