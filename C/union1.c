#include <stdio.h>

union abc
{
    int a;
    float b;
    char c;
};

struct pqr
{
    union abc var;
    char type;
    /* data */
};

int main()
{
    struct pqr p[10];

    int i = 0;
    while (i < 10)
    {
        printf("Menu = \ni = int\nf = float\nc = char\nChoose = ");
        scanf(" %c", &p[i].type);

        switch (p[i].type)
        {
        case 'i':
            printf("\nInt data = ");
            scanf("%d", &p[i].var.a);
            /* code */
            break;
        case 'f':
            printf("\nInt data = ");
            scanf("%f", &p[i].var.b);
            /* code */
            break;
        case 'c':
            printf("\nInt data = ");
            scanf(" %c", &p[i].var.c);
            /* code */
            break;
        }
        i++;
        /* code */
    }

    i = 0;
    printf("Output = \n");
    while (i < 10)
    {

        switch (p[i].type)
        {
        case 'i':
            printf("\nInt data = ");
            printf("%d", p[i].var.a);
            /* code */
            break;
        case 'f':
            printf("\nInt data = ");
            printf("%f", p[i].var.b);
            /* code */
            break;
        case 'c':
            printf("\nInt data = ");
            printf("%c", p[i].var.c);
            /* code */
            break;
        }
        i++;
        /* code */
    }

    return 0;
}