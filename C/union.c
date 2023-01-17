#include <stdio.h>

union abc
{
    int a;
    float b;
    char c;
};
int main()
{
    union abc p;
    float k;

    scanf("%f", &k);

    printf("Int data = ");
    scanf("%d", &p.a);
    printf("%d\n", p.a);
    
    printf("float data = ");
    scanf("%f", &p.b);
    printf("%f\n", p.b);

    p.c='A';
    printf("%c",p.c);
    return 0;
}