#include<iostream>
using namespace std;

class Employee
{
    public:
    int id;
    int salary;
    Employee(){}
    Employee(int id1)
    {
        id = id1;
        salary = 100;
    }
    void Print(void)
    {
        cout<<"Id of Employee (In class employee) is = "<<id<<endl;
    }
};

class teacher : public Employee
{
    public:
    char teachercode = 'C';

    teacher(int id1)
    {
        id = id1;
        salary = 200;
    }

    void Print(void)
    {
        cout<<"Id of teacher (In class teacher) is = "<<id<<endl;
    }

};

int main()
{
    Employee E1(1),E2(2);
    E1.Print();
    cout<<"Salary = "<<E1.salary<<endl;
    
    E2.Print();
    cout<<"Salary = "<<E2.salary<<endl;
    
    teacher t1(11),t2(12);
    t1.Print();
    cout<<"Salary = "<<t1.salary<<endl;
   cout<<"Teacher code = "<<t1.teachercode<<endl;

    t2.Print();
    cout<<"Salary = "<<t2.salary<<endl;
    cout<<"Teacher code = "<<t2.teachercode<<endl;

    
    return 0;
}