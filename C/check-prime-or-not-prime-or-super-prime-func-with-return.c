#include <stdio.h>

int main()
{

    int IsPrimeSuperPrime();

    switch (IsPrimeSuperPrime())
    {
    case 0:
        printf("Not prime");
        break;

    case 1:
        printf("Prime");
        break;

    case 2:
        printf("Super Prime");
        break;
    }

    return 0;
}

int IsPrimeSuperPrime()
{
    int no, i,dig;
    printf("Enter no = ");
    scanf("%d", &no);

    for (i = 2; i < no; i++)
    {
        if (no % i == 0)
        {
            break;
        }
    }
    if (i != no)
    {
        return 0;
    }

    while (no > 0)
    {
        dig = no % 10;
        if (dig == 2 || dig == 3 || dig == 5 || dig == 7)
        {
            no /= 10;
        }
        else
        {
            break;
        }
    }
    if (no == 0)
    {
        return 2;
    }
    else
    {
        return 1;
    }
}