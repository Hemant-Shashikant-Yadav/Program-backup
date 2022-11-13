#include<stdio.h>


int main ()
{
      
    void OddEven();
    OddEven();
         
    return 0; 
}

void OddEven()
{
    int no;
    printf("Enter no = ");
    scanf("%d",&no);

    if (no%2==0)
    {
        printf("Odd no.");
    }
    else
    {
        printf("Even no.");
    }
    
    
}