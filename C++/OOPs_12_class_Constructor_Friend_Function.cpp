#include<iostream>
#include<cmath>
using namespace std;

class Distance
{
    double x;
    double y;
friend double Calculate(Distance C1 ,Distance C2);
public:
    Distance(double a, double b);
    void Display_PT(void);    

};

Distance::Distance(double a,double b)
{
    x = a;
    y = b;
}

void Distance::Display_PT(void)
{
    cout<<"The point is = ("<<x<<","<<y<<")"<<endl;
}

double Calculate(Distance C1 ,Distance C2)
{
    return (sqrt(((C2.x-C1.x)*(C2.x-C1.x))+((C2.y-C1.y)*(C2.y-C1.y))));
}

int main()
{
    Distance C1 (1,1);
    C1.Display_PT();

    Distance C2 (7,20);
    C2.Display_PT();

    double ans = Calculate(C1,C2);
    cout<<"The Distance Between two point is = "<<ans;

    return 0;
}