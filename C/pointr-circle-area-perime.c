#include<stdio.h>

int calc(int r, float *a, float*p );

int main()
{
    int r;
    float a, p;

    printf("Enter the value of radius = ");
    scanf("%d",&r);

    calc(r,&a,&p);

    printf("The area is = %f",a);
    printf("\nThe perimeter is = %f", p);
    return 0;
}

int calc(int r, float *a, float* p)
{
    *a= 3.14*r*r;
    *p= 2*3.14*r;
}