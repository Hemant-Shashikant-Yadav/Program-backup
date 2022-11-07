/*
    Finding the area of Circle
*/

#include<stdio.h>

int main()
{
    const pi=3.14;
    int radius;
    
    printf("Enter the value of radius- ");
    scanf("%d", &radius);

    printf("The area of circle is- %d", pi*radius*radius);

    return 0;
}