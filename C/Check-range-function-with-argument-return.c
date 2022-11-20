#include <stdio.h>

int main()
{

    int IsInRange(int);
    int no;
    printf("Enter no = ");
    scanf("%d", &no);
    int res = IsInRange(no);
    if (res == 1)
    {
        printf("Within range.");
    }
    else
    {
        printf("Outside range.");
    }

    return 0;
}

int IsInRange(int no)
{

    if (no >= 0 && no <= 100)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}