#include <iostream>
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
};

void bank::GetData()
{
    cout << "Welcome to Hy bank : " << endl;
    cout << "Enter customer name = ";
    gets(Customer_name);

    cout << "Enter account number = ";
    cin >> Accout_no;

    cout << "Enter account type = ";
    cin >> Account_type;

    cout << "Enter ammout you want to diposite = ";
    cin >> balance;

    DisplayData();
}

void bank ::DisplayData()
{


}

int main()
{

    return 0;
}