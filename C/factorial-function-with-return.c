#include <stdio.h>

int main()
{

    int Factorial();
    int res = Factorial();

    printf("Factorial = %d",res);
    return 0;
}

int Factorial()
{
    int no,fact=1;
    printf("Enter no = ");
    scanf("%d", &no);

    for (int i = 1; i <=no; i++)
    {
       fact *= i;
    }
    
    return fact;
}