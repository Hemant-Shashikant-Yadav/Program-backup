#include<stdio.h>


int main ()
{
    int a,b,c;
    printf("Enter the marks of 3 subjects = ");
    scanf("%d %d %d",&a,&b,&c);
      
    if ((a+b+c)/3 >= 40)
    {
        if (a >= 33 && b>=33 && c>= 33)
        {
            printf("You passed the exam. Congratulations !!");
        }
        
    }
    else
    {
        printf("You failled in the exam. Better luck next time. ");
    }
    
    
    return 0; 
}