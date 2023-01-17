#include <stdio.h>
#include <string.h>

int main()
{

    FILE *fp;

    char str[100];

    fp = fopen("Stop.txt", "w");

    while (1)
    {
        printf("Messege = ");

        gets(str);

        if (strcmp(str, "stop") == 0)
        {
            break;
            /* code */
        }

        fputs(str, fp);
        fputs('\n', fp);
    }

    return 0;
}