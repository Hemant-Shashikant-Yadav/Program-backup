#include <iostream>
#include <string.h>
using namespace std;

class Employee
{
    int Enol;
    char Enm[15];
    double Esal;

public:
    Employee()
    {
        Enol = 0;
        Enm[0] = '\0';
        Esal = 0;
    }
    Employee(Employee &t)
    {
        Enol = t.Enol;
        strcpy(Enm, t.Enm);
        Esal = t.Esal;
    }

    friend istream &operator>>(istream &in, Employee &m)
    {
        cout << "\n Employee no = ";
        in >> m.Enol;
        cout << "\n Employee name = ";
        in >> m.Enm;
        cout << "\n Employee salary = ";
        in >> m.Esal;
        return in;
    }
    friend ostream &operator<<(ostream &out, Employee &m)
    {
        out << "\n Employee no = " << m.Enol;
        out << "\n Employee name = " << m.Enm;
        out << "\n Employee salary = " << m.Esal;
        return out;
    }
    int getNo()
    {
        return Enol;
    }
    double getSal()
    {
        return Esal;
    }
    int operator==(int n)
    {
        return (Enol == n);
    }
    int operator==(char *p)
    {
        return (strcmp(Enm, p) == 0);
    }
    Employee operator+(double amt)
    {
        Employee t;
        t.Enol = Enol;
        strcpy(t.Enm, Enm);
        t.Esal = Esal + amt;
        return t;
    }
    Employee operator-(double amt)
    {
        Employee t;
        t.Enol = Enol;
        strcpy(t.Enm, Enm);
        t.Esal = Esal - amt;
        return t;
    }
};

int main()
{
    Employee p, q;
    cin >> p;
    cout << p;
    if (p == 23)
    {
        cout << "\nMatch" << endl;
    }
    else
    {
        cout << "\nNot match" << endl;
    }
    q = p + 1200.50;
    cout << q;

    return 0;
}