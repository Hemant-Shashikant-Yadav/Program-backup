#include <stdio.h>

int main()
{

    int a;
    void display(int);
    void input(int *);
    void update(int *, int);

    input(&a);
    display(a);
    update(&a, 5);
    display(a);

    return 0;
}
void display(int b)
{
    printf("Data = %d", b);
}
void input(int *a)
{
    printf("Enter data = ");
    scanf("%d", *p);
}
void update(int *a, int b)
{
    *p = *p + q;
}