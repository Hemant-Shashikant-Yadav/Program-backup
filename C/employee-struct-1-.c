#include <stdio.h>

struct employee
{
    int id;
    char name[100];
    char blood_grp[4];
    
} e;

int main()
{

    printf("Enter the name of employee = ");
    gets(e.name);

    printf("Enter the id number of employee = ");
    scanf("%d", &e.id);

    printf("Enter the blood group of employee = ");
    scanf("%s", e.blood_grp);

    printf("The name of employee = ");
    printf("%s\n", e.name);

    printf("The id number of employee = ");
    printf("%d\n", e.id);

    printf("The blood group of employee = ");
    printf("%s\n", e.blood_grp);

    return 0;
}