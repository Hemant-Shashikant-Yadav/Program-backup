/*
    Finding the volume of Cylinder
*/

#include<stdio.h>

int main()
{
    const pi=3.14159;
    int radius, height, volume;
    
    printf("Enter the value of radius- ");
    scanf("%d", &radius);

    printf("Enter the value of height- ");
    scanf("%d", &height);
    
    volume=pi*radius*radius*height;
    printf("The volume of cylinder is- %d", volume);

    return 0;
}