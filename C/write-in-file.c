#include <stdio.h>

int main()
{

    FILE *fp1, *fp2;

    char ch;

    char ch;
    fp1 = fopen("abc.txt", "r");

    if (fp1 == NULL)
    {
        printf("File not found.");
        return;
        /* code */
    }

    fp2 = fopen("pqr.txt", "w");
    while (1)
    {
        ch = fgetc(fp1);

        if (feof(fp1))
        {
            break;
            /* code */
        }
        fputc(ch, fp2);

        /* code */
    }

    return 0;
}