/*This program is the combination of function and for loop*/

#include <stdio.h>

int table();
int num;
int main()
{

    printf("Enter the number you want the multiplication of=");
    scanf("%d", &num);
    printf("The multiplication table of %d is as follows=\n", num);
    table();
    return 0;
}
int table()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d= %d\n", num, i, num * i);
    }
}