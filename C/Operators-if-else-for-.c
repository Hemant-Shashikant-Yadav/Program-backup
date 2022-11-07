#include <stdio.h>

int main()
{
    int num1, num2, num3, i;
    printf("Enter the number of testcases=");
    scanf("%d", &num1);
    for (i = 0; i < num1; i++)
    {
        printf("Enter first and second number=");
        scanf("%d %d", &num2, &num3);
        if (num2 > num3)
        {
            printf(">\n");
        }
        else if (num3 > num2)
        {
            printf("<\n");
        }
        else
        {
            printf("=\n");
        }
    }

    return 0;
}
