#include <stdio.h>
#include <string.h>
// binary to decimal string

int main()
{

    char p[50], ch;
    int i = 0, j = 0, val = 0, mf = 1, dno = 0;

    printf("Enter string = ");
    scanf("%s", &p);

    i = strlen(p)-1;

    while (i >= 0)
    {
        ch = p[i];
        if (ch >= '0' && ch <= '7')
        {
            val = ch - 48;
            dno = dno + (mf * val);
            mf *= 8;
            i--;
        }
        else
        {
            break;
        }
    }

    if (i>=0)
    {
        printf("Invalid");
    }
    else
    {
        printf("Decimal number = %d",dno);
    }
    
    

    return 0;
}