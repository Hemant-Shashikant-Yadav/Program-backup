#include <stdio.h>

int main()
{
    int res;
    int OddEven();
    res = OddEven();

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
// int main()
// {
//     int OddEven();
//     if (OddEven())
//     {
//         printf("Odd no");
//     }
//     else
//     {
//         printf("Even no");
//     }

//     return 0;
// }

int OddEven()
{
    int no;
    printf("Enter no = ");
    scanf("%d", &no);

    if (no % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}