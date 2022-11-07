#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, sum, a, b, c;
    printf("Enter the number of testcases= ");
    scanf("%d", &n);

    while (n--)
    {
        printf("Enter the enter the angles of triangle= ");
        scanf("%d%d%d", &a, &b, &c);
        if (a + b + c == 180)
        {
            printf("It is a Triangle \n");
        }
        else
        {
            printf("It is not a Triangle\n");
        }
    }

    return 0;
}
