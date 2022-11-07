#include <stdio.h>
#include <string.h>

void parser(char *str);
int main()
{

    char str[] = "<head>   This is string   </head>";

    parser(str);

    printf("Extracted string (parsered) is = ~~~%s~~~", str);

    return 0;
}
void parser(char *str)
{
    int stop = 0, start = 0, index = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '<')
        {
            stop = 1;
            continue;
        }
        else if (str[i] == '>')
        {
            stop = 0;
            continue;
        }

        if (stop == 0)
        {
            str[index] = str[i];
            index++;
        }
    }
    str[index] = '\0';

    while (str[0] == ' ')
    {
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[i + 1];
        }
    }
    while (str[strlen(str) - 1] == ' ')
    {
        str[strlen(str) - 1] = '\0';
    }
}