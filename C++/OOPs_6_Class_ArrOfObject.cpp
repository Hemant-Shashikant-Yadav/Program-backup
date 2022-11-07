#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;
    // int count=1;

public:
    void Data_input(void);
    void Data_Output(void);
    // void Count(void);
};

void Employee ::Data_input(void)
{
    cout << "Enter the Id of Employee = ";
    cin >> id;
    cout << "Enter the salary of Employee = ";
    cin >> salary;
}

void Employee ::Data_Output(void)
{
    cout << "The Id of employee and Salary of Employee  is = " << id << " and = " << salary << endl;
}

// void Employee::Count(void)
// {
//     count++;
// }

int main()
{
    Employee E[10];

    for (int i = 0; i < 10; i++)
    {
        E[i].Data_input();
        // E[i].Count();
    }

    for (int i = 0; i < 10; i++)
    {
        E[i].Data_Output();
        // E[i].Count();
    }

    return 0;
}