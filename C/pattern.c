#include<stdio.h>


int main ()
{
    int a=1;
      
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
       
      
    return 0; 
}