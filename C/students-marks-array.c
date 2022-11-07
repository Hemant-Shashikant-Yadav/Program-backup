#include<stdio.h>

int main(int argc, char const *argv[])
{  
    printf("Enter the marks of five students=");
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("The marks you enterd are=");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d",marks[i]);
    }
    
    return 0;
}
