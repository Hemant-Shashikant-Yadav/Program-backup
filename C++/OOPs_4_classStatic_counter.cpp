#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salery;
    static int count;

public:
    void Data_input(void);
    void Data_Outout(void);
    static void count1(void);
};

void Employee::Data_input(void)
{
    cout << "Enter the id of employee " << count + 1 << endl;
    cin >> id;
    cout << "Enter the salery of employee " << count + 1 << endl;
    cin >> salery;
    count++;
}

void Employee::Data_Outout(void)
{
    static int count = 0;
    cout << "The Id of employee " << count + 1 << " is " << id << " and salary of employee is " << salery << endl;
    count++;
    count1();
}

void Employee::count1(void)
{
    static int count = 0;
    cout<<"The count is = "<<count+1<<endl; 
    count++;
}

// Here count is static data member
int Employee::count;

int main()
{
    Employee E1, E2, E3, E4;

    E1.Data_input();
    E2.Data_input();    
    E3.Data_input();
    E4.Data_input();

    E1.Data_Outout();
    //Employee::count1();
    E2.Data_Outout();
    //Employee::count1();
    E3.Data_Outout();
    //Employee::count1(); 
    E4.Data_Outout();
    //Employee::count1();

    return 0;
}