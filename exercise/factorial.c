#include <stdio.h>

int main()
{

    int res(int a);
    int facto(int a);
    int a;

    printf("Enter the number for factorial = ");
    scanf("%d", &a);

    res(a);
    
    return 0;
}
int facto(int a)
{
    int f;
    if (a == 0)
    {
        return 1;
    }
    else
    {
        f = a * facto(a - 1);
        return f;
    }
}
int res(int a)
{
    int f = facto(a);
    printf("The value of factorial is = %d", f);
}