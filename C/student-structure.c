#include <stdio.h>

struct student
{
    int roll_no;
    char name[100];
    int marks;
    /* data */
};

int main()
{
    struct student s;

    printf("Enter roll no of student = ");
    scanf("%d", &s.roll_no);
    getchar();
    printf("Enter name of student = ");
    gets(s.name);
    printf("Enter marks of student = ");
    scanf("%d", &s.marks);

    printf("\nRoll no of student = %d", s.roll_no);
    printf("\nName of student = ");
    puts(s.name);
    printf("\nMarks of student = %d", s.marks);
    return 0;
}