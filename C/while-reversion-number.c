#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, number, result = 0, remender;
    printf("Enter the number you want to reverse=");
    scanf("%d", &number);
   while(number>0)
    {
        remender = number % 10;
        result = (result * 10) + remender;
        number = number / 10;
    }
    printf("Result=%d",result);
    return 0;
}
