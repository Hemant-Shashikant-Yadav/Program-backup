#include<stdio.h>


int main ()
{
      
    int a = 10, b = 20 ;
    int *p, *q;
    p = &a;
    q = &b;

    printf("a is = %d\n",a);
    printf("a is = %d\n",b);

    //printing regular value of pointer
    printf("p is = %x\n",p);
    printf("q is = %x\n",q);

    //increment of pointer
    p++;
    printf("p++ is = %x\n",p);
    q++;  
    printf("q++ is = %x\n",q);

    //decrement of pointer
    p--;
    printf("p-- is = %x\n",p);
    q--;  
    printf("q-- is = %x\n",q);

    //addition of pointer
    //p + q ;
    //printf("p+q is = %x\n",p+q);

    //substraction of pointer
    p - q ;
    printf("p+q is = %x\n",p-q);

    //multiplication of pointer
    //p * q ;
    //printf("p+q is = %x",p*q);
    //invalid

    //division of pointer
    //p / q ;
    //printf("p+q is = %x",p/q);
    //invalid

    //modulus of pointer
    //p % q ;
    //printf("p+q is = %x",p%q);
    //invalid

    
    return 0; 
}