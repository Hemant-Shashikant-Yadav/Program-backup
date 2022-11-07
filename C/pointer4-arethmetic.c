#include<stdio.h>


int main ()
{
      
    int a = 10, b = 20 ;
    int *p, *q;
    p = &a;
    q = &b;

    //printing regular value of pointer
    printf("p is = %d\n",*p);
    printf("q is = %d\n",*q);

    //increment of value
    ++*p;
    printf("++p is = %d\n",*p);
    ++*q;  
    printf("++q is = %d\n",*q);

    //decrement of pointer
    --*p;
    printf("--p is = %d\n",*p);
    --*q;  
    printf("--q is = %d\n",*q);

    //addition of pointer
    *p + *q ;
    printf("p+q is = %d\n",*p+*q);

    //substraction of pointer
    *p - *q ;
    printf("p-q is = %d\n",*p-*q);

    //multiplication of pointer
    *p * *q ;
    printf("p*q is = %d\n",*p**q);
    //invalid

    //division of pointer
    (*p)/(*q);
    printf("p/q is = %d\n",(*p)/(*q));
  
    //modulus of pointer
    *p % *q ;
    printf("p%%q is = %d\n",*p%*q);


    
    return 0; 
}