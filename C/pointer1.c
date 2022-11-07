#include<stdio.h>


int main ()
{
      
    int n,*p;
    p = &n;

    printf("Enter the number = ");
    scanf("%d",&n);

    printf("The number entred = %d \n",n);
    printf("The address of number = %p \n",p);
   // printf("The number entred = %d \n",*p);
   // printf("The address of number = %x \n",&n);
  //  printf("The number entred = %d \n",*(&n));


    return 0; 
}