/*getchar()*/

#include <stdio.h>
#include <string.h>

int main()
{

    int num, i = 0;
    char a, b;

    while (i < 3)
    {
        printf("\nEnter number = ");
        scanf("%d", &num);
        getchar();
        printf("\nEnter char a = ");
        scanf("%c", &a);
        getchar();
        printf("\nEnter char b = ");
        scanf("%c", &b);

        printf("\vNum = %d\n", num);
        printf("a = %c\n", a);
        printf("b = %c\n", b);

        i++;
    }

    return 0;
}