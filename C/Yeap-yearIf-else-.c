#include<stdio.h>

int main(int argc, char const *argv[])
{
    int Num1, Num2, Num3, Num4;
    
    printf("Enter the year-");
    scanf("%d", &Num1);

    Num2=Num1/4;
    Num2=Num1/400;
    Num2=Num1/100;

    if(Num2== 0)
    {
        printf("The year is leap year");
    }
    else if(Num3 == 0)
    {
        printf("The year is leap year");
    }
    else if(Num4 == 0)
    {
        printf("The year is leap year");
    }
    else
    {
        printf("The year is not a leap year");
    }
    
    return 0;
}
