#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, i, num2;

    for (i = 1; i <= 10; i++)
    {
        printf("Enter the number you want the table of=");
        scanf("%d", num1);

        num2 = num1 * i;
        printf("%d\n", num2);
    }

    return 0;
}
