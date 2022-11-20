#include <stdio.h>

int main()
{

    int res;
    int OddEven(int);

    int no;
    printf("Enter no = ");
    scanf("%d", &no);
    res = OddEven(no);
    if (res == 1)
    {
        printf("Odd no");
    }
    else
    {
        printf("Even no");
    }

    return 0;
}

int OddEven(int no)
{
    if (no % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}