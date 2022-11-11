#include<stdio.h>


int main ()
{
      
    char a[5][25],q[15];
    
    printf("Enter city names = ");
    for (int i = 0; i < 5; i++)
    {
        gets(a[i]);
    }

    printf("Enter searching city name = ");
    gets(q);
    
    
      
    return 0; 
}