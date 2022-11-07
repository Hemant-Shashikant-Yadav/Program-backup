#include <stdio.h>

struct student
{
    char name[100];
    char name2[100];
    char name3[100];
    int roll_no;
    struct dob
    {
        int date;
        char month[50];
        int year;
    } d1;
};

int main()
{
    int n;
    printf("Enter the number of students = ");
    scanf("%d", &n);
    struct student s1[n];

    for (int i = 0; i < n; i++)
    {

        printf("Enter the full name of student = ");
        // gets(s1[i].name);
        scanf("%s%s%s", &s1[i].name,&s1[i].name2,&s1[i].name3);
        printf("Enter the roll number of student = ");
        scanf("%d", &s1[i].roll_no);
        printf("Enter the date of birth of student of student (DD MONTH YYYY) = ");
        scanf("%d %s %d", &s1[i].d1.date, &s1[i].d1.month, &s1[i].d1.year);

        printf("\n\n\n\nThe name of student is = %s %s %s\n", s1[i].name,s1[i].name2,s1[i].name3);

        printf("The roll number of student is = %d \n", s1[i].roll_no);
        printf("The roll number of student is = %d \n", s1[i].roll_no);

        printf("The date of birth of student of student (DD MONTH YYYY) is = %d %s %d", s1[i].d1.date, s1[i].d1.month, s1[i].d1.year);
    }
    return 0;
}