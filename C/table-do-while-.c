#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2 = 1, num3;

    printf("Enter a number for making table=");
    scanf("%d", &num1);

    do
    {
        
        printf("%d\n", num3 = num1 * num2);
        num2++;
    } while (num2 <= 10);

    return 0;
}
