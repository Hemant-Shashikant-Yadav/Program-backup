#include <iostream>
using namespace std;

class Measurement
{
    int  lenth, breadth, height, opt;
    long side;
    long height1;
    int radius0;
    float radius, base,radius3;
    double radius1, height2;

public:
    void menu();
    int shape(int radius0);
    int shape(int lenght, int breadth);
    int shape(long side);
    int shape(float base, int height);
    int shape(float radius, long height);
    int shape(double radius1);
    int shape(float radius3, double height2);
};
int Measurement::shape(int radius0)
{
    return (3.14 * radius0 * radius0);
}
int Measurement::shape(int lenght, int breadth)
{
    return (lenght * breadth);
}
int Measurement::shape(long side)
{
    return (side * side);
}
int Measurement::shape(float base, int height)
{
    return ((base * height) / 2);
}
int Measurement::shape(float radius, long height1)
{
    return (3.14 * radius * radius * (height1 / 2));
}

int Measurement::shape(double radius1)
{
    return ((3.14 * radius1 * radius1 * radius1 * 4) / 3);
}

int Measurement::shape(float radius3, double height2)
{
    return(3.14*radius3*radius3*height2);
}

void Measurement::menu()
{
    while (1)
    {
        cout << "\n\nWelcome \n1.Area of Circle\n2.Area of Rectangle\n3.Area of square\n4.Area of triangle\n5.Volume of Cone\n6.Volume of Sphere\n7.Volume of cylinder\n8.Exit\nEnter the option number = ";
        cin >> opt;
        if (opt == 8)
        {
            break;
        }
        else
        {
            switch (opt)
            {
            case 1:
                cout << "Enter the radius = ";
                cin >> radius0;
                cout << "Area = " << shape(radius0);

                break;
            case 2:
                cout << "Enter the length and breadth = ";
                cin >> lenth >> breadth;
                cout << "Area = " << shape(lenth, breadth);
                break;
            case 3:
                cout << "Enter the side = ";
                cin >> side;
                cout << "Area = " << shape(side);
                break;
            case 4:
                cout << "Enter the base and height = ";
                cin >> base >> height;
                cout << "Area = " << shape(base, height);

                break;
            case 5:
                cout << "Enter the radius and height = ";
                cin >> radius >> height1;
                cout << "Volume = " << shape(radius, height1);

                break;
            case 6:
                cout << "Enter the radius = ";
                cin >> radius1;
                cout << "Volume = " << shape(radius1);

                break;
            case 7:
                cout << "Enter the radius and height = ";
                cin >> radius3 >> height2;
                cout << "Volume = " << shape(radius3, height2);

                break;

            default:
                break;
            }
        }
    }
}
int main()
{
    Measurement M;
    M.menu();
    return 0;
}