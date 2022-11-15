#include<iostream>
using namespace std;

int area(int side);
int area(int lenght,int breadth);
int area(double radius);

int main()
{
    cout << "The area of circle of radius 4  is = " << area( 5.00) << endl;
    cout << "The area of square of side 4 is = " << area(4) << endl;
    cout << "The area of rectangle of length 4 & breadth 5  is = " << area(4, 5) << endl;

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