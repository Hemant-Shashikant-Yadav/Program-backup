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
    struct student s1;

    printf("Enter data for student = \n");
    printf("Enter roll no = ");
    scanf("%d", &s1.roll);
    printf("Enter mark of 4 subject = ");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &s1.mark[i]);
    }
    sum = s1.mark[0] + s1.mark[1] + s1.mark[2] + s1.mark[3];

    s1.avg = sum / 4;

    printf("\vThe roll no = %d\n", s1.roll);
    printf("The mark of 4 subject = \n");
    for (int i = 0; i < 4; i++)
    {
        printf("Mark %d = %4d\n", i + 1, s1.mark[i]);
    }
    printf("The average = %f", s1.avg);

    return 0;
}