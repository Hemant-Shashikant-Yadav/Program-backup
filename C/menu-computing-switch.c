#include <stdio.h>

int main()
{

    int n, temp, rev = 0, dig, sum = 0, i, opt;

    while (1)
    {
        printf("\n\n   Menu:\n1.Enter no\n2.Prime no\n3.Even Odd\n4.Digit sum\n5.Reverse\n6.Table\n7.Exit\n\v");

        scanf("%d", &opt);

        if (opt > 6)
        {
            break;
        }

        switch (opt)
        {
        case 1:
            printf("Enter the Number = ");
            scanf("%d", &n);
            break;

        case 2:
            i = 2;
            while (i < n)
            {
                if (n % i == 0)
                {
                    break;
                }
                i++;
            }
            if (i == n)
            {
                printf("Prime");
            }
            else
            {
                printf("Non Prime");
            }
            break;

        case 3:
            if (n % 2 == 0)
            {
                printf("Even");
            }
            else
            {
                printf("Odd");
            }
            break;

        case 4:
            temp=n;
            while (temp > 0)
            {
                dig = temp % 10;
                sum += dig;
                temp /= 10;
            }
            printf("Digit sum = %d", sum);
            break;

        case 5:
            temp=n;
            while (temp > 0)
            {
                dig = temp % 10;
                rev = rev * 10 + dig;
                temp /= 10;
            }
            printf("Reverse = %d", rev);
            break;

        case 6:
            i = 1;
            printf("Table = \n");
            while (i <= 10)
            {
                printf("%d\n", n * i);
                i++;
            }
            break;
        }
    }

    return 0;
}