#include <stdio.h>

int main()
{
    int res;

    int CountNo();
    res = CountNo();
    printf("Count = %d", res);

    return 0;
}

int CountNo()
{
    int no, i, count = 0;
    printf("Enter no = ");
    scanf("%d", &no);

    while (no > 0)
    {
        count++;
        no /= 10;
    }
    return count;
}