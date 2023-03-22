#include <stdio.h>

#define M 50

typedef struct charstack
{
    int top;
    char arr[M];
} CSTK;

void init(CSTK *t)
{
    t->top = -1;
}

void push(CSTK *t, char ch)
{
    t->top++;
    t->arr[t->top] = ch;
}

int isEmpty(CSTK *t)
{
    return (t->top == -1);
}

char pop(CSTK *t)
{
    return t->arr[t->top--];
}

