#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, n, sum = 0;
    printf("Enter the number of digit you want to find sum=");
    scanf("%d", &n);
    printf("Enter the numbers=");
    for (i = 0; i < n; i++)
    {
        int a;
        
        scanf("%d", &a);
        sum = sum + a;
    }
    printf("%d", sum);

    return 0;
}
