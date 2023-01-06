#include <stdio.h>

struct book
{
    int book_no;
    char name[100];
    int price;
    /* data */
};

int main()
{
    struct book s;

    printf("Enter roll no of book = ");
    scanf("%d", &s.book_no);
    getchar();
    printf("Enter name of book = ");
    gets(s.name);
    printf("Enter price of book = ");
    scanf("%d", &s.price);

    printf("\nRoll no of book = %d", s.book_no);
    printf("\nName of book = ");
    puts(s.name);
    printf("\nprice of book = %d", s.price);
    return 0;
}