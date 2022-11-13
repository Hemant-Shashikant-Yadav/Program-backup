#include <stdio.h>

int main()
{

    void DigitSum();
    DigitSum();

    return 0;
}

void DigitSum()
{
    int no,sum=0,dig;
    printf("Enter no = ");
    scanf("%d", &no);

    while (no>0)
    {
        dig=no%10;
        sum+=dig;
        no/=10;
    }
    
    printf("Digit sum = %d",sum);
}