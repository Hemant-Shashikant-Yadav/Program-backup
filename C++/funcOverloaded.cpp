#include <iostream>
using namespace std;

int volume(int radius, int height);
int volume(int side);
int volume(int length, int breadth, int height);

int main()
{
    cout << "The volume of cylinder of radius 4 and height 5 is = " << volume(4, 5) << endl;
    cout << "The volume of cube of side 4 is = " << volume(4) << endl;
    cout << "The volume of cuboid of length 4, breadth 5 and height 6 is = " << volume(4, 5, 6) << endl;

    return 0;
}
int volume(int radius, int height)
{
    return (3.14 * radius * height);
}
int volume(int side)
{
    return (side * side * side);
}
int volume(int length, int breadth, int height)
{
    return (length * breadth * height);
}