#include <stdio.h>
#include "1ACCT.h"

int main()
{

    ACCT ac;
    int n;
    FILE *fp = fopen("Acc.dat", "Wb");

    while (1)
    {
        printf("\nAcc no = ");
        scanf("%d", &n);

        if (n == 0)
        {
            break;
        }

        input(&ac, n);
        fwrite(&ac, sizeof(ACCT), 1, fp);
    }
    fclose(fp);
    return 0;
}