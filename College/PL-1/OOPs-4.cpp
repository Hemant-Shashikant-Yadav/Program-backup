#include <iostream>
using namespace std;

class account
{
private:
    int opt;
    char name[50];
    long int ACCnumber;
    float bal = 0, intr, amt, acc, rate, dep, month, wet;

public:
    account();
    ~account();
    void deposite();
    void compund();
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
void account::menu()
{
    while (1)
    {
        cout << "\vWelcome \n1.Display balance\n2.Diposite\n3.Withdraw\n4.Exit\nEnter the option number = ";
        cin >> opt;
        if (opt == 4)
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