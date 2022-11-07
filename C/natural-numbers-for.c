#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, num1;

    printf("Enter a natural number=");
    scanf("%d", &num1);
    for (i = 1; i <= num1; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
