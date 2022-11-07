#include <stdio.h>

int main()
{

    int i = 1, pc = 0, nc = 0, zc = 0, n;

    while (i <= 10)
    {
        printf("Enter a number = ");
        scanf("%d", &n);

        if (n > 0)
        {
            pc++;
        }
        else
        {
            if (n < 0)
            {
                nc++;
            }
            else
            {
                zc++;
            }
        }
        i++;
    }

    printf("\vTotal positive count is = %d\nTotal negative count is = %d\nTotal zero count is = %d\n",pc,nc,zc);
    return 0;
}