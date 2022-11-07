/*
    Finding the area of Rectangle using the values given by user.
*/

#include <stdio.h>

int main()
{
    int Length, Breadth;
    
    printf("Enter the Length of rectangle-");
    scanf("%d", &Length);
    
    printf("Enter the Length of rectangle-");
    scanf("%d", &Breadth);

    printf("The area of Rectangle is- %d", Length*Breadth);
    
    return 0;
}