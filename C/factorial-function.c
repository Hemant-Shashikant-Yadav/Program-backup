#include <stdio.h>

int main()
{

    void Factorial();
    Factorial();

    return 0;
}

void Factorial()
{
    int no,fact=1;
    printf("Enter no = ");
    scanf("%d", &no);

    for (int i = 1; i <=no; i++)
    {
       fact *= i;
    }
    printf("Factorial of %d = %d",no,fact);
    
    
}