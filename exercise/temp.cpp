#include <iostream>
using namespace std;
class bankdemo
{
private:
    char name[20];
    int accno;
    float bal, amt, dep;

public:
    bankdemo();
    ~bankdemo();
    void information();
    void deposit();
    void withdraw();
    void display();
};
bankdemo::bankdemo()
{
    cout << "enter the name =";
    gets(name);
    cout << "enter the accno=";
    cin >> accno;
}
bankdemo ::~bankdemo()
{
    cout << "acount removed";
}
void bankdemo::information()
{
    cout << "enter all info: ";
    cout << "enter THE BALANCE OF ACCOUNT=";
    cin >> dep;
}

void bankdemo::deposit()
{
    float a;
    cout << "deposit" << endl;
    cout << "enter the amout to deposit" << endl;
    cin >> a;
    bal = bal + a;
}
void bankdemo::withdraw()
{
    float amount;
    cout << "withdraw" << endl;
    cout << "enter the amount" << endl;
    cin >> amount;
    bal = bal - amount;
}
void bankdemo::display()
{

    cout << "account detail as follow as:" << endl;
    cout << "name of depositor" << name << endl;
    cout << "account no" << accno << endl;
    cout << "balance" << bal << endl;
}
int main()
{

    bankdemo b;
    do
    {

        int choice;
        cout << "enter the choice";
        cout << "1.create n account/n2.deposit the amount./n3.withraw the amount/n4.exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "enter the account";
            break;
        case 1:
            b.information();
            break;
        case2:
            b.deposit();
            break;
        case3:
            b.withdraw();
            break;
        case 4:
            break;

        default:
            cout << "invalid option\n";
        }

    } while (1);
}