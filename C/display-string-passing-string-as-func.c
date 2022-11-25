// Function to display string

#include <stdio.h>

int main()
{

    char p[50];
    void display(char[]);

    printf("Enter string = ");
    gets(p);

    display(p);

    return 0;
}
// void display(char a[])
// {
//     puts(a);
// }

void display(char a[])
{
    int i = 0;
    while (a[i] != '\0')
    {
        printf("%c", a[i]);
        i++;
    }
}