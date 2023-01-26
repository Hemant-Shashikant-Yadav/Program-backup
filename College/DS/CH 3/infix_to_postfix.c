#include <stdio.h>

int main()
{

    char input[100], output[100];
    int i = 0;
    int precendace;

    printf("Enter the expression = ");
    gets(input);

    while (input[i] != '\0')
    {
        /* code */
        if (input[i] == '(')
        {
            // push directly
        }
        else if (input[i] == '^')
        {
            precendace = 3;
        }
        else if (input[i] == '*' || input[i] == '/')
        {
            precendace = 2;
        }
        else if (input[i] == '+' || input[i] == '-')
        {
            precendace = 1;
        }

        if (input[i] != '(' || input[i] != ')' || input[i] != '^' || input[i] != '*' || input[i] != '/' || input[i] != '+' || input[i] != '-')
        {
            output[i] = input[i];
        }

        if (input[i] == ')')
        {
            // pop until ')' is reached and dont store paratheses in output
        }


        if (precendace>= TOS ||)
        {
            /* code */
        }
        

        i++;
    }

    return 0;
}