// detail of book using structure

#include <stdio.h>

struct book
{
    int id;
    char name[100];
    float price;
    char author[100];
} e;

int main()
{

    printf("Enter the name of book = ");
    gets(e.name);

    printf("Enter the id number of book = ");
    scanf("%d", &e.id);

    printf("Enter the name of author = ");
    gets(e.author);

    printf("Enter price of book = ");
    scanf("%f", &e.price);

    printf("Enter the name of book = ");
    printf("%s \n", e.name);

    printf("Enter the id number of book = ");
    printf("%d\n", e.id);

    printf("Enter the name of author = ");
    printf("%s\n", e.author);

    printf("Enter price of book = ");
    printf("%f\n", e.price);

    return 0;
}