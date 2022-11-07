#include <stdio.h>
int num;
float num1, num2;
int conversion();
int main()
{

fun:

    printf(
        "\n\n Enter the number of conversion factor=\n"
        "1. kms to Mile\n"
        "2. Inches to Foot\n"
        "3. cms to Inches\n"
        "4. Pound to kgs\n"
        "5. Inches to meter\n"
        "6. Quit\n \n");
    scanf("%d", &num);
    if (num == 6)
    {
        return 0;
    }
    
    conversion();
    goto fun;

    return 0;
}
int conversion()
{
    switch (num)
    {
    case 1:
        printf("Enter the first number=");
        scanf("%f", &num1);
        num2 = num1 * 0.621371;
        printf("Number after conversion is= %f", num2);
        break;

    case 2:
        printf("Enter the first number=");
        scanf("%f", &num1);
        num2 = num1 * 0.0833333;
        printf("Number after conversion is= %f", num2);
        break;

    case 3:
        printf("Enter the first number=");
        scanf("%f", &num1);
        num2 = num1 * 0.393701;
        printf("Number after conversion is= %f", num2);
        break;

    case 4:
        printf("Enter the first number=");
        scanf("%f", &num1);
        num2 = num1 * 0.453592;
        printf("Number after conversion is= %f", num2);
        break;

    case 5:
        printf("Enter the first number=");
        scanf("%f", &num1);
        num2 = num1 * 0.0254;
        printf("Number after conversion is= %f", num2);
        break;

    }
}