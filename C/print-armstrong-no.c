#include<stdio.h>


int main ()
{
      
    int a,cube,sum,dig,temp;

    for(a=100;a<1000;a++)
    {
        for(temp=a,sum=0;temp>0;temp/=10)
        {
            dig=temp%10;
            cube=dig*dig*dig;

            sum+=cube;
        }
        if (a==sum)
        {
            printf("Armstrong no = %d\n",sum);
        }
        
    }

      
    return 0; 
}