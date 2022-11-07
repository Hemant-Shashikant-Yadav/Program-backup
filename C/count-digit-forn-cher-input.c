#include <stdio.h>

int main()
{

    int i = 1, Dcount = 0, UCcount = 0, LCcount = 0, Ocount = 0;
    char ch;

    while (i <= 10)
    {
        printf("Enter a character = ");
        scanf("%c ", &ch);

        if (ch >= 48 && ch <= 57)
        {
            Dcount++;
        }
        else
        {
            if (ch >= 65 && ch <= 90)
            {
                UCcount++;
            }
            else if (ch >= 'a' && ch <= 'z')
            {
                LCcount++;
            }

            else
            {
                Ocount++;
            }
        }
        i++;
    }

    printf("The Upper case count is = %d \nThe Lower case count is = %d \nThe digit count is = %d \nThe other count is = %d \n",UCcount,LCcount,Dcount,Ocount);

    return 0;
}