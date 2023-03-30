#include <stdio.h>
#include <ctype.h>

typedef struct stack
{
    int top;
    char opr[50];
    /* data */
} STK;

STK S;

void push(char a)
{
    S.top++;
    S.opr[S.top] = a;
}
void pop()
{
    S.top--;
}

int isEmpty()
{
    return (S.top == -1);
}

void init()
{
    S.top = -1;
}

int precedence(char sTop, char opr)
{
    if (sTop != '(' && opr == ')')
    {
        return 1;
        /* code */
    }
    else
    {
        return 0;
    }
}

int main()
{
    int i = 0, j = 0;
    char p[100], q[100], ch;
    init();

    printf("Enter expression = ");
    scanf("%s", p);

    while (p[i] != '\0')
    {
        if (isalpha(p[i]))
        {
            q[j++] = p[i];
            /* code */
        }
        else
        {
            while (!isEmpty() && precedence(S.opr[S.top], p[0]))
            {
                ch = S.opr[S.top];
                pop();
                q[j++] = ch;
                /* code */
            }

            if (isEmpty() || p[i] != ')')
            {
                push(p[i]);
                /* code */
            }
            else
            {
                pop();
            }
        }
        i++;
        /* code */
    }
    while (!isEmpty())
    {
        ch = S.opr[S.top];
        q[j++] = ch;
        pop();
        /* code */
    }
    q[j] = '\0';
    puts(q);

    return 0;
}
/*
(a+b)*c
((a+b)/c)*d
*/