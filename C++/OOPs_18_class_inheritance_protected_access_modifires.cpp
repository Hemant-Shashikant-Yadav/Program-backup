#include <iostream>
using namespace std;
/* 1. protected data int public,privet and protected derivation*/


class Data
{
    int data2;
protected:
    int data1;

public:
    void setdata1(int a)
    {
        data2 = a;
    }
    int getdata1()
    {
        return data2;
    }
};
class derrived : /*public*/ /*privet*/ protected Data
{
public:
    void setdata();
    void getdata();
};

void derrived::setdata()
{
    int a;
    cout << "Enter data 1 = ";
    cin >> data1;
    cout << "Enter data 2 = ";
    cin>> a;
    setdata1(a);

}
void derrived::getdata()
{
    cout << "Data 1 = "<<data1<<endl;
    cout << "Data 2 = "<<getdata1();

}
int main()
{
    derrived d;
    d.setdata();
    d.getdata();

    return 0;
}