#include<stdio.h>


int main ()
{
      
    int n,sv,dig,temp;

    printf("Enter a number = ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        temp=n;
        while (temp>0)
        {
            dig=temp%10;
            if (dig==i)
            {
                break;
            }
            temp/=10;
        }
        if (temp==0)
        {
            printf("Missing digit = %d\n",i);
        }
        
        
    }
    
      
    return 0; 
}