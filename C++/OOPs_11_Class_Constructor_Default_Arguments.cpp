#include <iostream>
using namespace std;

class Simple
{
    int a, b;

public:
    Simple(int , int );

};

Simple::Simple(int a = 10, int b = 20)
{
    cout<<"The value of a and b is = "<<a<<" & "<<b<<endl;
}

int main()
{
   
 
    Simple a1(1,2);
    Simple a2(1);
    Simple a3;

    return 0;
}