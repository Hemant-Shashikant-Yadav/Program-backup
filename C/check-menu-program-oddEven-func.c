#include <stdio.h>

int oddEven(int no)
{
    return (no % 2);
}

int count(int no)
{
    int count = 0;
    while (no > 0)
    {
        count++;
        no /= 10;
    }
    return count;
}

int digSum(int no)
{
    int tot = 0;
    while (no > 0)
    {
        tot += (no % 10);
        no/=10;
    }
    return tot;
}

int prime(int no)
{
    int i = 2;
    while (i < no)
    {
        if (no % i == 0)
        {
            break;
        }
        i++;
    }
    if (i == no)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void table(int no)
{
    int i = 1;
    printf("Table = \n");
    while (i <= 10)
    {
        printf("%4d", no * i);
        i++;
    }
}

int rev(int no)
{
    int rev = 0;
    while (no > 0)
    {
        rev = (rev * 10 )+ (no % 10);
        no /= 10;
    }
    return rev;
}

int main()
{
    int no, opt, flag = 0;

    while (1)
    {

        printf("Menu\n1.Enter no\n2.Table\n3.OddEven\n4.Count\n5.Digit sum\n6.Prime\n7.Reverse\n8.Palindrome\n9.Exit\nOption = ");

        scanf("%d", &opt);
        if (opt > 8)
        {
            break;
        }
        else
        {
            switch (opt)
            {
            case 1:
                printf("Enter no = ");
                scanf("%d", &no);
                flag = 1;
                break;

            default:
                if (flag == 0)
                {
                    printf("Invalid Data !!!");
                    continue;
                }

                switch (opt)
                {
                case 2:
                    table(no);
                    break;
                case 3:
                    if (oddEven(no) == 0)
                    {
                        printf("Even");
                    }
                    else
                    {
                        printf("Odd");
                    }

                    break;

                case 4:
                    printf("Digit Count = %d", count(no));
                    break;
                case 5:
                    printf("Digit sum = %d", digSum(no));
                    break;
                case 6:
                    if (prime(no) == 0)
                    {
                        printf("Not prime");
                    }
                    else
                    {
                        printf("Prime");
                    }
                    break;
                case 7:
                    printf("Reverse = %d", rev(no));
                    break;
                case 8:
                    if (no == rev(no))
                    {
                        printf("Palindrome");
                    }
                    else
                    {
                        printf("Not palindrome");
                    }
                    break;
                default:
                    break;
                }

                break;
            }
        }
    }

    return 0;
}