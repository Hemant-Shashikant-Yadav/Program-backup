#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number = ");
    scanf("%d",&num);

    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=num; j++)
        {
            if(j<=num-i)
            {
                printf("  ");
            }
            else
            {
                printf(" *");    
            }
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf(" *");    
            
        }
        printf("\n");
    }
    return 0;
}