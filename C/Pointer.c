#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a=15;
    int *ptr=&a;

    printf("%d\n",a);       //15
    printf("%p\n",&a);     //0061FF18 
    printf("%d\n",*(&a));   //15
    printf("%p\n",ptr);     //0061FF18
    printf("%d\n",*ptr);    //15

    return 0;
}
