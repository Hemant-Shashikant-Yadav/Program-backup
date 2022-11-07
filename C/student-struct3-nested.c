#include <stdio.h>

struct student
{
    char name[100];
    int roll_no;
    struct dob
    {
        int date;
        char month[50];
        int year;
    } d1;

} s1;

int main()
{
    printf("Enter the name of student = ");
    gets(s1.name);
    printf("Enter the roll number of student = ");
    scanf("%d", &s1.roll_no);
    printf("Enter the date of birth of student of student (DD MONTH YYYY) = ");
    scanf("%d %s %d", &s1.d1.date, &s1.d1.month, &s1.d1.year);

    printf("\n\n\n\nThe name of student is = %s \n", s1.name);

    printf("The roll number of student is = %d \n", s1.roll_no);
    printf("The roll number of student is = %d \n", s1.roll_no);

    printf("The date of birth of student of student (DD MONTH YYYY) is = %d %s %d", s1.d1.date, s1.d1.month, s1.d1.year);

    return 0;
}