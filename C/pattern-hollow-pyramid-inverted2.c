#include<stdio.h>


int main ()
{
      
    int n;

    printf("Enter line count = ");
    scanf("%d",&n);

    if (n%2==0)
    {
        n+=1;
    }

    // for(int i =1;i<=n;i++)
    // {
    //     for(int j=1; j<=n;j++)
    //     {
    //         if (i==1|| j==1||i+j==n+1)
    //         {
    //             printf("*");
    //         }
    //         else
    //         {
    //             printf(" ");
    //         }
            
            
    //     }
    //     printf("\n");
    // }

    for (int i =n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            if (i==n|| j==1||i==j)
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