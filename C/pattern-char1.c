#include<stdio.h>


int main ()
{
      
    int n,no=65;

    printf("Enter line count = ");
    scanf("%d",&n);

    if (n%2==0)
    {
        n+=1;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if (i==1||j==1||j==n||i==n)
            {
                printf("%c",no);
            }
            else
            {
                printf(" ");
            }
            
            
        }
        printf("\n");
        no++;
    }
    
      
    return 0; 
}