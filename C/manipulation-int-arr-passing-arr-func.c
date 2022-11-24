// Program for manipulation of int arr
#include <stdio.h>

#define M 5 // Macro keyword //macro data
void dispaly(int a[])
{
    int i = 0;
    printf("Data = ");
    while (i < M)
    {
        printf("%4d", a[i]);
        i++;
    }
}

int total(int p[])
{
    int i = 1, tot = p[0];
    while (i < M)
    {
        tot += p[i];
        i++;
    }

    return tot;
}

int avg(int a[])
{
    return total(a) / M;
}

int maxpos(int a[])
{
    int i = 1, xpos = 0;
    while (i < M)
    {
        if (a[i] > a[xpos])
        {
            xpos = i;
            i++;
        }
    }
    return xpos;
}

int maxval(int a[])
{
    return a[maxpos(a)];
}

int minpos(int a[])
{
    int i = 1, npos = 0;
    while (i < M)
    {
        if (a[i] < a[npos])
        {
            npos = i;
            i++;
        }
        return npos;
    }
}

int minval(int a[])
{
    return a[minpos(a)];
}

int search(int a[], int sv)
{
    int i = 0;
    while (i < M)
    {
        if (a[i] == sv)
        {
            break;
        }
        i++;
    }
    return ((i == M) ? 0 : 1);
}

int main(int argc, char const *argv[])
{
    int x[M], sv, res, opt, i = 0;
    while (1)
    {
        printf("\nMENU\n1.Input\n2.Output\n3.Total\n4.Avg\n5.Max vlue\n6.Min value\n7.Search\n8.Exit\nCHOICE = ");

        scanf("%d", &opt);
        if (opt == 8)
        {
            break;
        }
        else
        {
            switch (opt)
            {
            case 1:
                printf("Data = ");
                for (i = 0; i < M; i++)
                {
                    scanf("%d", &x[i]);
                }
                break;
            case 2:
                dispaly(x);
                break;
            case 3:
                printf("Total = %d", total(x));
                break;
            case 4:
                printf("Average = %d", avg(x));
                break;
            case 5:
                printf("Max Data = %d", maxval(x));
                break;
            case 6:
                printf("Min Data = %d", minval(x));
                break;
            case 7:
                printf("Search value = ");
                scanf("%d", &sv);
                if (search(x, sv) == 0)
                {
                    printf("Not found");
                }
                else
                {
                    printf("Found");
                }

                break;
            }
        }
    }

    return 0;
}