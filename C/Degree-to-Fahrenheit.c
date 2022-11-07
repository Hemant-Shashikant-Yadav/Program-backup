#include <stdio.h>

int main()
{

    int deg, far, a;

    printf("Enter the case number = \n1. Degree to Fahrenheit \n2. Fahrenheit to Degree \n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("Enter the temprature in degree = ");
        scanf("%d", &deg);

        far = ((deg * 9) / 5) + 32;
        printf("%d", far);

        break;

    case 2:
        printf("Enter the temprature in fahrenheit = ");
        scanf("%d", &far);

        deg = ((far - 32) * 5) / 9;
        printf("%d", deg);

        break;

    default:
        printf("You entered invalid case.");
        break;
    }

    return 0;
}