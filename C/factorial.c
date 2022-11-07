//Write a C program to find factorial using recusion

#include <stdio.h>

int func(int a);
int main()
{

    int a;

    printf("Enter the number = ");
    scanf("%d", &a);

    int ans = func(a);
    printf("The factorial is = %d", ans);

    return 0;
}
int func(int a)
{
    int ans;
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        ans = a * func(a - 1);  
        return ans;
    }
}