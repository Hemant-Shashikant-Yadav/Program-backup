#include <stdio.h>

int prime(int a);
int main()
{
    int a, b ,flag;
    printf("Enter the number = ");
    scanf("%d %d", &a, &b);

    printf("The prime number in the given range are = ");
    for (int i = a; i < b; i++)
    {
        prime(i);
        if (flag = 1)
        {
            printf("%d", i);
        }
    }

    return 0;
}
int prime(int a)
{
    int flag;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            flag = 0;
        }
        else
        {
            flag = 1;
        }
    }
    return flag;
}