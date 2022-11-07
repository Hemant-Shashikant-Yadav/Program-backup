#include<stdio.h>


int main()
{
    int t,n;
    
    printf("Enter the number of testcases =");
    scanf("%d",&t);

    for (int i = 0; i < t; i++)
    {
        printf("Enter the number =");
        scanf("%d",&n);

        if (n%2==0 && n%3==0)
        {
            printf("The number is devisible by both 2 & 3");
        }
        else if (n%2==0 || n%3==0)
        {
            if (n%2==0)
            {
                printf("The number is devisible by 2");
            }
            else
            {
                printf("The number is devisible by 3");
            }
        }
        else
        {
            printf("The number is not devisible by both 2 & 3");
        }
        
        
    }
    
    return 0;
}
