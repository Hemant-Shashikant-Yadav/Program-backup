#include <stdio.h>

int main()
{

    int DigitSum(int);
    int no;
    printf("Enter no = ");
    scanf("%d", &no);
    int res = DigitSum(no);

    printf("Digit sum = %d", res);
    return 0;
}

int DigitSum(int no)
{
    int  sum = 0, dig;

    while (no > 0)
    {
        dig = no % 10;
        sum += dig;
        no /= 10;
    }

    return sum;
}