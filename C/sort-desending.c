#include<stdio.h>


int main ()
{
      
    int n,sv,res=0,dig,temp;

    printf("Enter the number = ");
    scanf("%d", &n);

    for(sv=9;sv>0;sv--)
    {
        temp=n;
        while (temp>0)
        {
            dig=temp%10;
            if (dig==sv)
            {
                res=res*10+dig;
            }
            temp/=10;
        }
        
    }
    printf("Result = %d",res);
    return 0; 
}