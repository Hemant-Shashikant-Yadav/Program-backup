#include <bits/stdc++.h>
using namespace std;

class bank
{
protected:
    int Accout_no;
    char Customer_name[50];
    int Account_type;
    int balance = 0;

public:
    void GetData();
    void DisplayData();
    void DisplayBalance();
    void Withdraw();
    void Diposite();
    void menu();
};

void bank::GetData()
{
    cout << "Welcome to Hy bank : " << endl;
    cout << "Enter customer name = ";
    gets(Customer_name);

    cout << "Enter account number = ";
    cin >> Accout_no;

    cout << "Enter account type :\n1. Current Accout\n2. Saving Accout \nChoice = ";
    cin >> Account_type;

    cout << "Enter ammout you want to diposite = ";
    cin >> balance;

    DisplayData();
}

void bank ::DisplayData()
{
    cout << "Customer name = ";
    puts(Customer_name);

    cout << "Account number = " << Accout_no << endl;

    cout << "Account type = " << ((Account_type == 1) ? "Current Account" : "Saving Account") << endl;

    DisplayBalance();

    menu();
}

void bank ::DisplayBalance()
{
    cout << "Your accout balance is = " << balance << endl;
}

void bank::menu()
{
    int opt;
    while (1)
    {

        cout << "Menu\n1.Withdraw money.\n2.Deposite money\n3.Exit\nSelect choice = ";
        cin >> opt;

        if (opt == 3)
        {
            break;
        }

        switch (opt)
        {
        case 1:
            Withdraw();
            break;
        case 2:
            Diposite();
            break;

        default:
            break;
        }
    }
}

void bank::Diposite()
{
    int amt;
    cout << "Enter ammount you want add = ";
    cin >> amt;
    balance += amt;

    DisplayBalance();
}
void bank::Withdraw()
{
    int amt;
    cout << "Enter ammount you want remove = ";
    cin >> amt;
    balance -= amt;

    DisplayBalance();
}

class Current : public bank
{
protected:
public:
    void check_Penalty();
};

void Current::check_Penalty()
{
    if (balance < 500 && Account_type == 1)
    {
        cout << "Your account balance is low!!!\nYou got the penalty!!!" << endl;
        balance -= 50;

        DisplayBalance();
    }
}

class Saving : public bank
{
protected:
public:
    void intrest();
};

void Saving::intrest()
{
    double principal, rate, time;

    cout << "Welcone to compound intrest calculator = " << endl;
    cout << "Enter principal amount = ";
    cin >> principal;
    cout << "Enter intrest rate = ";
    cin >> rate;
    cout << "Enter time in years = ";
    cin >> time;
    double A = principal * (pow((1 + rate / 100), time));
    double CI = A - principal;

    cout << "Compound interest is " << CI;
}
int main()
{
    bank bk;
    Current c;
    Saving s;

    bk.GetData();
    s.intrest();
    c.check_Penalty();

    return 0;
}