#include <stdio.h>

int main()
{

    struct student
    {
        int roll;
        int mark[4];
        float avg;
    };
    int sum = 0;
    struct student s[5];

for (int i = 0; i < 5; i++)
{
 
    printf("Enter data for student %d = \n",i+1);
    printf("Enter roll no %d = ",i+1);
    scanf("%d", &s[i].roll);
    printf("Enter mark of 4 subject = ");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &s[i].mark[i]);
    }
    sum = s[i].mark[0] + s[i].mark[1] + s[i].mark[2] + s[i].mark[3];

    s[i].avg = sum / 4;
}
for (int i = 0; i < 5; i++)
{
 
    printf("\vThe roll no = %d\n", s[i].roll);
    printf("The mark of 4 subject = \n");
    for (int i = 0; i < 4; i++)
    {
        printf("Mark %d = %4d\n", i + 1, s[i].mark[i]);
    }
    printf("The average = %f", s[i].avg);
}
    return 0;
}