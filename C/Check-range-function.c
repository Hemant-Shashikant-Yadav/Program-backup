#include <stdio.h>

int main()
{

    void IsInRange();
    IsInRange();

    return 0;
}

void IsInRange()
{
    int no;
    printf("Enter no = ");
    scanf("%d", &no);

    if (no >= 0 && no <= 100)
    {
        printf("Within range.");
    }
    else
    {
        printf("Outside range.");
    }
}