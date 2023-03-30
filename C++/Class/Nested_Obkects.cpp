#include <iostream>
#include <string.h>
#include "Classs_time.h"

using namespace std;

class Employee
{
private:
    /* data */
    int EmpNo;
    char EmpName[50];
    int EmpSalPerHr;
    int WorkingTime;
    Classs_time T;

public:
    Employee(/* args */)
    {
        EmpNo = EmpSalPerHr = 0;
        EmpName[0] = '\0';
        T = Classs_time();
    }
    Employee(Employee &E)
    {
        EmpNo = E.EmpNo;
        strcpy(EmpName, E.EmpName);
        EmpSalPerHr = E.EmpSalPerHr;
        T = E.T;
    }
    ~Employee() {}

    void setData()
    {
        cout << "Enter number = ";
        cin >> EmpNo;
        cout << "Enter name = ";
        cin >> EmpName;
        cout << "Enter salary per hr = ";
        cin >> EmpSalPerHr;
        T.setTime();
    }

    void diaplay1()
    {
        cout << "Employee data = " << endl;
        cout << "Emp. no. = " << EmpNo << endl;
        cout << "Emp. name = " << EmpName << endl;
        cout << "Emp salary per hr = " << EmpSalPerHr << endl;
        cout << "Work time = " << endl;
        T.display();

        int a = T.getHr();
        int b = T.getMin();

        if (b > 30)
        {
            a++;
        }
        cout << "Total salary = " << a * EmpSalPerHr << endl;
    }

    int getSlary()
    {
        int a = T.getHr();
        int b = T.getMin();

        if (b > 30)
        {
            a++;
        }
        return a * EmpSalPerHr;
    }

    int getEmpNo()
    {
        return EmpNo;
    }

    int getSalPerHr()
    {
        return EmpSalPerHr;
    }

    Classs_time getTime()
    {
        return T;
    }

    int compareNo(Employee &T)
    {
        return EmpNo < T.EmpNo;
    }
    int compareSalary(Employee &T)
    {
        return getSalPerHr() < T.getSalPerHr();
    }
    int compareTime(Employee &E)
    {
        return T.toSeconds() < (E.T).toSeconds();
    }
};

int main()
{

    Employee E[5];
    Employee temp;

    int i = 0, j = 0, pos = 0;
    for (int i = 0; i < 5; i++)
    {
        E[i].setData();
    }
    for (int i = 0; i < 5; i++)
    {
        E[i].diaplay1();
    }

    for (int i = 0; i < 4; i++)
    {
        pos = i;
        for (int j = 1; j < 5; j++)
        {
            if (E[j].compareNo(E[pos]))
            {
                pos = j;
                /* code */
            }
            /* code */
        }
        if (i != pos)
        {
            Employee temp = E[i];
            E[i] = E[pos];
            E[pos] = temp;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        E[i].diaplay1();
    }

    return 0;
}