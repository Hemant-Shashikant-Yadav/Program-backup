#include <iostream>
using namespace std;

class Employee
{
protected:
    int Id;
    char Name[50];
    char gender[10];

public:
    void getdata1();
};
class Depaertment
{
protected:
    int time;
    char NameDept[50];
    char Work[50];

public:
    void getdata2();
};

class DisplayData : public Employee, public Depaertment
{
protected:
    int c;

public:
    void operation();
};

void Employee::getdata1()
{
    cout << "Name of employee = ";
    gets(Name);
    cout << "Name of gender = ";
    gets(gender);
    cout << "Id of employee = ";
    cin >> Id;
}
void Depaertment::getdata2()
{
    getchar();
    cout << "Name of department = ";
    gets(NameDept);
    cout << "Name of work = ";
    gets(Work);
    cout << "Time required to complete = ";
    cin >> time;
}

void DisplayData::operation()
{
    cout << "Name of employee = " << Name << endl;
    cout << "Gender of employee = " << gender << endl;
    cout << "Id of employee = " << Id << endl;
    cout << "Name of department = " << NameDept << endl;
    cout << "Name of work  = " << Work << endl;
    cout << "Time required for work = " << time << endl;
}

int main()
{
    DisplayData d;
    d.getdata1();
    d.getdata2();
    d.operation();
    return 0;
}