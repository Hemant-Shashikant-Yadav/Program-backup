#include<stdio.h>


int main ()
{
      int temp;
    for (int i = 0; i <5; i++)
    {
        temp=i;
        for (int j = 7; j >temp;j--)
        {
            printf("*");
            temp--;
        }
        printf("\n");
    }
    

    return 0; 
}