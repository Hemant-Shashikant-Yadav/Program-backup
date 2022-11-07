#include<stdio.h>

int main()
{
    int Marks ;

    printf("Enter the marks (0-100)\n");
    scanf("%d",&Marks);

    switch (Marks/10)
    {
    case 10:
    case 9:
        printf("You got gread A\n");
        break;
    
    case 8:
        printf("You got gread B\n");
        break;

    case 7:
        printf("You got gread C/n");
        break;

    case 6:
        printf("You got gread D/n");
        break;

    default:
        printf("You are Fail");
        break;
    }
    return 0;

}
