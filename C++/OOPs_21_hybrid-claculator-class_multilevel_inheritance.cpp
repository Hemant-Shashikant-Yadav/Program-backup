#include <bits/stdc++.h>
using namespace std;

class simple
{
    int a, b;
    float c, d;

public:
    void sum();
    void sub();
    void mul();
    void div();
};
class scientific
{
    int e, f;
    double g;

public:
    void sin1();
    void cos1();
    void tan1();
    void log1();
    void logtobase10();
    void powr1();
};

class Hybrid : public simple, public scientific
{
    int opt;

public:
    void menu();
};

void simple::sum()
{
    cout << "Enter no 1 = ";
    cin >> a;
    cout << "Enter no 2 = ";
    cin >> b;
    cout << "Sum = " << a + b;
}
void simple::sub()
{
    cout << "Enter no 1 = ";
    cin >> a;
    cout << "Enter no 2 = ";
    cin >> b;
    cout << "Sub = " << a - b;
}
void simple::mul()
{
    cout << "Enter no 1 = ";
    cin >> a;
    cout << "Enter no 2 = ";
    cin >> b;
    cout << "Mul = " << a * b;
}
void simple::div()
{
    cout << "Enter no 1 = ";
    cin >> c;
    cout << "Enter no 2 = ";
    cin >> d;
    cout << "Div = " << c / d;
}

void scientific::sin1()
{
    cout << "Enter degree = ";
    cin >> e;
    cout << "Sin = " << sin(e);
}
void scientific::cos1()
{
    cout << "Enter degree = ";
    cin >> e;
    cout << "Cos = " << cos(e);
}
void scientific::tan1()
{
    cout << "Enter degree = ";
    cin >> e;
    cout << "Tan = " << tan(e);
}
void scientific::log1()
{
    cout << "Enter no = ";
    cin >> g;
    cout << "Natural log = " << log(g);
}
void scientific::logtobase10()
{
    cout << "Enter no = ";
    cin >> g;
    cout << "Log to base 10 = " << log10(g);
}
void scientific::powr1()
{
    cout << "Enter number 1 = ";
    cin >> e;
    cout << "Enter number 2 = ";
    cin >> f;
    cout << "Pow = " << pow(e, f);
}

void Hybrid::menu()
{
    while (1)
    {
        cout << "\n\n\nWelcome\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.sin\n6.cos\n7.tan\n8.Natueral log\n9.log base \n10.Power\n11.Exit\nChoose an option = ";
        cin >> opt;
        cout << "\n\n";
        if (opt == 11)
        {
            break;
        }
        else
        {
            switch (opt)
            {
            case 1:
                sum();
                break;
            case 2:
                sub();
                break;
            case 3:
                mul();
                break;
            case 4:
                div();
                break;
            case 5:
                sin1();
                break;
            case 6:
                cos1();
                break;
            case 7:
                tan1();
                break;
            case 8:
                log1();
                break;
            case 9:
                logtobase10();
                break;
            case 10:
                powr1();
                break;
            }
        }
    }
}

int main()
{
    Hybrid M;
    M.menu();

    return 0;
}