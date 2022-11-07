#include<stdio.h>

int main(int argc, char const *argv[])
{
    int Years_of_service, Qualifications, Salary;
    char Gender;
    
    printf("Enter your Gender(M/F)\n Qualification (G=0, PG=1)\n Years of service\n ");
    scanf("%c %d %d", &Gender, &Qualifications, &Years_of_service  );

    if (Gender=='M' || 'm')
    {
        if (Qualifications==0)
        {
            if (Years_of_service>=10)
            {
                printf("Your salary is 10000");
            }
            else
            {
                printf("Your salary is 7000");
            }
        }
        else if (Qualifications==1)
        {
            if (Years_of_service>=10)
            {
                printf("Your salary is 15000");
            }
            else
            {
                printf("Your salary is 10000");
            }
        }     
    }
    else if (Gender=='F'||'f')
    {
        if (Qualifications==0)
        {
            if (Years_of_service>=10)
            {
                printf("Your salary is 9000");
            }
            else
            {
                printf("Your salary is 6000");
            }
        }
        else if (Qualifications==1)
        {
            if (Years_of_service>=10)
            {
                printf("Your salary is 12000");
            }
            else
            {
                printf("Your salary is 10000");
            }
        }     
    }
    
    
    return 0;
}
