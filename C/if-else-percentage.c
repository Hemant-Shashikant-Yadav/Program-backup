#include<stdio.h>

int main(int argc, char const *argv[])
{
    float m1,m2,m3,m4,m5,per;

    printf("Enter the marks of each sybject=");
    scanf("%f %f %f %f %f ",&m1, &m2, &m3, &m4, &m5);

    per=(m1+m2+m3+m4+m5)/5;

    if ((per>=60))
    {
        printf("Congratulations you got %f, Fist Class",per);
    }
    else if ((per>=50)&&(per<40))
    {
        printf("Congratulations you got %f, Second Class",per);
    }
    else if (per>=40)
    {
        printf("Congratulations you got %f, Third Class",per);
    }
    else
    {
        printf("You failed in exam");
    }
    
    
    return 0;
}
