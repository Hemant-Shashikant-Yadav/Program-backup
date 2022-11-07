#include <stdio.h>

int main()
{

    int n ;
    printf("\nLine count = ");
    scanf("%d",&n);

    if (n%2==0)
    {
        n+=1;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == n / 2 || i == n/2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}