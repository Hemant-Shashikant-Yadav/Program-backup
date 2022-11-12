#include <stdio.h>

struct student
{
    int roll;
    int rank;
};

void printstudent(struct student *s);

int main()
{
    struct student s1, s2;
    s1.roll = 2102;
    s1.rank = 1;

    s2.roll = 2190;
    s2.rank = 2;

    printstudent(&s1);
    printstudent(&s2);

    return 0;
}

void printstudent(struct student *s)
{
    printf("\vThe roll no of student is = %d\n", s->roll);
    printf("The rank of student is = %d\n", s->rank);
}