#include <stdio.h>

int main()
{

    void Table();
    Table();

    return 0;
}

void Table()
{
    int no;
    printf("Enter no = ");
    scanf("%d", &no);

    printf("Teble = \n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%4d", no * i);
    }
}