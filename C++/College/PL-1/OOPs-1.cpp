#include <iostream>
#include <string>
using namespace std;

class Car
{
    char name[50];
    char Brand[50];
    char Id[10];
    int Price;
public:
    void getdata();
    void Display();

};

void Car::getdata()
{
    cout<<"Enter the name of Car = ";
    cin>>name;
    cout<<"Enter the company name of Car = ";
    cin>>Brand;

    cout<<"Enter the id of Car = ";
    cin>>Id;
    cout<<"Enter the price of Car = ";
    cin>>Price;
}

void Car ::Display()
{
    cout<<"\vThe id of Car id = "<<Id<<endl;
    cout<<"The name of Car id = "<<name<<endl;
    cout<<"The company of Car id = "<<Brand<<endl;
    cout<<"The price of Car id = "<<Price<<endl;

}
int main()
{
    Car E1;

    E1.getdata();
    E1.Display();

    return 0;
}