#include<stdio.h>


int main ()
{
    int a;  
    int n[100];
    int *p = n;

    printf("Enter the number of elements = ");
    scanf("%d",&a);
    printf("Enter the numbers =");
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&n[i]);
    }
    
    //Increment of pointer
    printf("Increment of pointer is = \n");
    for (int i = 0; i < 5; i++)
    {
        printf("The value of %d is %d\n",i+1,n[i]);
        printf("The address of %d is %x\n\n",i+1,p);
        p++;
    }

    //Decrement of pointer
    printf("Decrement of pointer is = \n");
    for (int i = 5; i > 0; i--)
    {
        printf("The value of %d is %d\n",i,n[i-1]);
        printf("The address of %d is %x\n\n",i,p);
        p--;
    }
      
    return 0; 
}