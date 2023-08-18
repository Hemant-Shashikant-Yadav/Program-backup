#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *left;
    char ch;
    struct node *right;
} NODE;

NODE *rt = NULL;
NODE *createNode(char p)
{
    NODE *a;

    a = (NODE *)malloc(sizeof(NODE));
    a->left = a->right = NULL;
    a->ch = p;
    return a;
}
void prefix(NODE *a)
{
    if (a != NULL)
    {
        printf("%c", a->ch);
        prefix(a->left);
        prefix(a->right);
        /* code */
    }
    else
    {
        return;
    }
}

void infix(NODE *a)
{
    if (a != NULL)
    {
        infix(a->left);
        printf("%c", a->ch);
        infix(a->right);
        /* code */
    }
    else
    {
        return;
    }
}

void postfix(NODE *a)
{
    if (a != NULL)
    {
        postfix(a->left);
        postfix(a->right);
        printf("%c", a->ch);
        /* code */
    }
    else
    {
        return;
    }
}
struct stack
{
    int top;
    NODE *arr[10];
} s;
void init()
{
    s.top = -1;
}

void push(NODE *a)
{
    s.top++;
    s.arr[s.top] = a;
}
int isEmpty()
{
    return (s.top == -1);
}
NODE *pop()
{
    return s.arr[s.top--];
}

int main()
{
    char p[100];
    int i = 0;
    NODE *a, *b, *c;
    init();

    printf("Enter postfix experssion = ");
    scanf("%s", &p);

    while (p[i] != '\0')
    {
        if (p[i] >= 65 && p[i] <= 90)
        {
            a = createNode(p[i]);
            push(a);
            /* code */
        }
        else
        {
            a = createNode(p[i]);
            b = pop();
            c = pop();
            a->right = b;
            a->left = c;
            push(a);
        }
        i++;
    }

    rt = pop();

    printf("Prefix = ");
    prefix(rt);

    printf("\nInfix = ");
    infix(rt);

    printf("\nPostfix = ");
    postfix(rt);
    return 0;
}