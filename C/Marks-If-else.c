#include<stdio.h>

int main()
{
    int M,S,BOTH  ;

    printf("Enter the Maths test marks\n");
    scanf("%d", &M);

    printf("Enter the Science test marks\n");
    scanf("%d", &S);

    BOTH=M+S;

    if ((M>=35)&& (S>=35))
    {
        printf("Congrarulations you passed Maths and Science. So you get 45 points");
    }
    
    else if (M>=35)
    {
        printf("Congrarulations you passed Maths. So you get 15 points");
    }

    else if (S>=35)
    {
        printf("Congrarulations you passed Science. So you get 15 points");
    }
    
    else
    {
        printf("You failed in examination.");
    }
         
    return 0;
}
