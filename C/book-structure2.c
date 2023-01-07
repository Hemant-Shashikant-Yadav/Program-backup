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
    struct book *ptr;

    ptr = &s;

    printf("Enter roll no of book = ");
    scanf("%d", ptr->book_no);
    getchar();
    printf("Enter name of book = ");
    scanf("%S", ptr->name);
    printf("Enter price of book = ");
    scanf("%d", ptr->price);

    printf("\nRoll no of book = %d", ptr->book_no);
    printf("\nName of book = %s",ptr->name);
    printf("\nprice of book = %d", ptr->price);
    return 0;
}