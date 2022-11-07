#include <stdio.h>

int main()
{

    int n,i=1;

    printf("Enter number = ");
    scanf("%d", &n);

    printf("Table = \n");
    while (i<=10)
    {
        printf("%d\n",n*i);
        i++;
    }
    

    return 0;
}