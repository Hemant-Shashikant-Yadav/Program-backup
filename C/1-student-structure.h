#include<stdio.h>

struct student
{
    int roll_no;
    char name[50];
    int mark;
};

void input(struct student *a, int no)
{
    a->roll_no = no;
    printf("Enter name of student = ");
    gets(a->name);
    printf("Enter marks of student = ");
    scanf("%d", a->mark);
}

void output(struct student s)
{
    printf("Student name = ");
    puts(s.name);
    printf("Student roll no = %d\n",s.roll_no);
    printf("Student mark = %d\n",s.mark);

}