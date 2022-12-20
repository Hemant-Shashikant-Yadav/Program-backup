#include <stdio.h>
#include <myarray.h>

int main()
{
    int x[10], opt, res, sv;

    while (1)
    {
        printf("\nMenu\n1.Input\n2.Display\n3.Total\n4.Find max position\n5.Find max value\n6.Find min position\n7.Find min value\n8.Search\n9.Is ordered\n10.Exit\nEnter choice = ");
        scanf("%d", &opt);

        if (opt > 9)
        {
            break;
        }
        else
        {
            switch (opt)
            {
            case 1:
                input(x, 10);
                break;
            case 2:
                display(x, 10);
                break;
            case 3:
                res = calctotal(x, 10);
                printf("Sum = %d", res);
                break;
            case 4:
                printf("Max data position =  %d", findmaxpos(x, 10));
                break;
            case 5:
                res = findmaxpos(x, 10);
                printf("Max data value =  %d", x[res]);
                break;
            case 6:
                printf("Min data position =  %d", findminpos(x, 10));
                break;
            case 7:
                res = findminpos(x, 10);
                printf("Min data value =  %d", x[res]);
                break;
            case 8:
                printf("Enter search value = ");
                scanf("%d", &sv);
                res = search(x, sv, 10);
                if (res == -1)
                {
                    printf("Not found!!!");
                }
                else
                {
                    printf("Found");
                }
                break;
            case 9:
                if (checkOrder(x, 10) == 0)
                {
                    printf("Not ordered !!!");
                }
                else
                {
                    printf("Ordered");
                }

                break;

            default:
                printf("You entered wrong choice !!!");
                break;
            }
        }
    }

    return 0;
}
