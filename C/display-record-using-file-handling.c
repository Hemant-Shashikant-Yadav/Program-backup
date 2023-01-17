#include <stdio.h>
#include "1ACCT.h"

int main()
{

    ACCT ac;
    int n;
    FILE *fp = fopen("Acc.dat", "rb");

    if (fp == NULL)
    {
        printf("File not found.");
        return;
    }

    while (1)
    {
        fread(&ac, sizeof(ACCT), 1, fp);

        if (feof(fp))
        {
            break;
        }
        diasplay(&ac);
    }
    fclose(fp);
    return 0;
}