/*Write a program to find number of prime numbers between given numbers */


#include<stdio.h>

int findprime(int n1,int n2);
int main(int argc, char const *argv[])
{
    int n1,n2;

    //printf("Enter Two numbers =");
    scanf("%d %d",&n1,&n2);
    
    int ans = findprime(n1,n2); 
    
    printf("%d",ans);
    
    return 0;
}

int findprime(int n1, int n2)
{
    int true, add=0;
    for (int i = n1; i <= n2; i++)
    {
        for (int j = 2; j < n1; j++)
        {
            if (n1%j==0)
            {
                true=0;
            }
            else
            {
                true=1;
                break ;
            }
            if (true=1)
            {
                add++;
            }
            
         
        }
        
    }
    
   return add; 
}