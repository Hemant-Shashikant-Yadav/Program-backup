#include<stdio.h>

int main(int argc, char const *argv[])
{
    int year1, year2, diff;

    printf("The year which the employee joined the organization=");
    scanf("%d",&year2);

    printf("Current year=");
    scanf("%d",&year1);

    diff=year1-year2;
    printf("The number of years for which the employee has served the organization is=%d\n",diff);

    if (diff >= 3)
    {
        printf("You recived a bonus of Rs.2500.");
    }
    else
    {
        printf("You didn't recived any bonus.");
    }
    
    return 0;
}
