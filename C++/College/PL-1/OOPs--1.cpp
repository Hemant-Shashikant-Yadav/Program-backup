#include <iostream>
#include <string>
using namespace std;

class Employee
{
    char name[50];
    int Id;
public:
    void getdata();
    void Display();

};

void Employee::getdata()
{
    cout<<"Enter the name of Employee = ";
    gets(name);
    
    cout<<"Enter the id of Employee = ";
    cin>>Id;
   
}

void Employee ::Display()
{
    cout<<"\vThe id of Employee id = "<<Id<<endl;
    cout<<"The name of Employee id = "<<name<<endl;
    
}
int main()
{
    Employee E1;

    E1.getdata();
    E1.Display();

    return 0;
}