#include <bits/stdc++.h>
using namespace std;

class account
{
private:
    int opt;
    char name[50];
    long int ACCnumber;
    float bal = 0, intr, amt=0, acc, rate, dep, time, wet, n, principal;

public:
    account();
    ~account();
    void deposite();
    void compund();
    void simple();
    void menu();
    void withdraw();
    void displaybal();
};

account::account()
{
    cout << "Enter name of account holder = ";
    gets(name);
    cout << "Enter name of account number = ";
    cin >> ACCnumber;
}

account::~account()
{
    cout << "The account is been removed.";
}

void account::displaybal()
{
    cout << "The balance of accout is = " << bal << endl;
}
void account::deposite()
{
    cout << "Enter balance you want to diposite = ";
    cin >> dep;
    bal += dep;
    displaybal();
}
void account::withdraw()
{
    cout << "Enter balance you want to withdraw = ";
    cin >> wet;
    bal -= wet;
    displaybal();
}
void account::compund()
{
    cout << "Enter principal ammount = ";
    cin >> principal;
    cout << "Enter intrest rate = ";
    cin >> rate;
    cout << "Enter time period = ";
    cin >> time;
    cout << "Enter number of times interest applied per time period = ";
    cin >> n;
    amt = principal * (pow((1 + ((rate/100) / n)),( n * time)));

    cout << "\vThe final amount is = " << amt << endl;
    cout << "\vThe compund intrest is = " << amt - principal << endl;
}
void account::simple()
{
    cout << "Enter principal ammount = ";
    cin >> principal;
    cout << "Enter intrest rate = ";
    cin >> rate;
    
    cout << "Enter time period = ";
    cin >> time;
    amt = principal * (1 + ((rate/100) * time));
    cout << "\vThe final amount is = " << amt << endl;
    cout << "\vThe simple intrest is = " << amt - principal << endl;
}
void account::menu()
{
    while (1)
    {
        cout << "\vWelcome \n1.Display balance\n2.Diposite\n3.Withdraw\n4.Compund intrest\n5.Simple intrest\n6.Exit\nEnter the option number = ";
        cin >> opt;
        if (opt == 6)
        {
            break;
        }
        else
        {
            switch (opt)
            {
            case 1:
                displaybal();
                break;
            case 2:
                deposite();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                compund();
                break;
            case 5:
                simple();
                break;

            default:
                break;
            }
        }
    }
}

int main()
{
    account A;
    A.menu();
    return 0;
}