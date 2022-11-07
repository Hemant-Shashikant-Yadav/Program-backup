#include <stdio.h>

int main()
{

    int i = 0, ma = 0, me = 0, mi = 0, mu = 0, mo = 0, oth = 0;
    char ch;

    do
    {
        printf("Enter a character = ");
        scanf("%c ", &ch);

        switch (ch)
        {
        case 'a':
        case 'A':
            ma++;
            break;
        case 'e':
        case 'E':
            me++;
            break;
        case 'i':
        case 'I':
            mi++;
            break;
        case 'o':
        case 'O':
            mo++;
            break;
        case 'u':
        case 'U':
            mu++;
            break;

        default:
            oth++;
            break;
        }
        i++;
    } while (i < 10);

    printf("\vA: %d\nE: %d\nI: %d\nO: %d\nU: %d\nOther: %d\n",ma,me,mi,mo,mu,oth);

    return 0;
}