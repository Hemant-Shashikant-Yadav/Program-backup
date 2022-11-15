#include<iostream>
using namespace std;

int area(int side);
int area(int lenght,int breadth);
int area(double radius);
int volume(int radius, int height);


int main()
{
    cout << "The area of circle of radius 4  is = " << area( 5.00) << endl;
    cout << "The area of square of side 4 is = " << area(4) << endl;
    cout << "The area of rectangle of length 4 & breadth 5  is = " << area(4, 5) << endl;
    // cout << "The volume of cylinder of radius 4 and height 5 is = " << volume(4, 5) << endl;
    // cout << "The volume of cone of radius 4 and height 5 is = " << volume(4, 5) << endl;

    return 0;
}
int area(int side)
{
    return(side*side);
}
int area(int lenght,int breadth)
{
    return(lenght*breadth);
}
int area(double radius)
{
    return(3.14 * radius*radius);
}
int volume(int radius, int height)
{
    return (3.14 * radius * height);
}
// int volume(int radius, int height)
// {
//     return (3.14 * radius * radius *( height/3));
// }