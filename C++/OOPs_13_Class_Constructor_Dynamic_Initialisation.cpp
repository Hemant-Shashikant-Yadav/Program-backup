#include <iostream>
using namespace std;

class Bank
{
    int Principal;
    int time;
    float intrest;
    float Return;

public:
    Bank();
    Bank(int p, int t, int i);
    Bank(int p, int t, float i);
    void Print_Balance(void);
};

Bank::Bank()
{
}

Bank::Bank(int p, int t, int i)
{
    Principal = p;
    time = t;
    intrest = float(i) / 100;

    Return = Principal;

    for (int j = 0; j < t; j++)
    {
        Return = Return * (1 + intrest);
    }
}

Bank::Bank(int p, int t, float i)
{
    Principal = p;
    time = t;
    intrest = i;

    Return = Principal;

    for (int j = 0; j < t; j++)
    {
        Return = Return * (1 + intrest);
    }
}

void Bank::Print_Balance(void)
{
    cout << "For your entered Principal amount " << Principal
         << " Rs. for time of " << time
         << " years and intrest of " << intrest
         << ", the return amount is = " << Return << endl;
}

int main()
{
    Bank B1, B2, B3;

    int Principal;
    int Time;
    float Intrest;
    int Intrest1;
    float return1;

    cout << "Enter Principal amount in Rs. s" ;
    cin>> Principal;
    cout << "\nFor time of years "  ;
    cin>> Time;
    cout << "\nIntrest of " ;
    cin>> Intrest;

    B1 = Bank(Principal,Time,Intrest);
    B1.Print_Balance();

    cout << "Enter Principal amount in Rs. ";
    cin>> Principal;
    cout << "\nFor time of years "  ;
    cin>> Time;
    cout << "\nIntrest of " ;
    cin>> Intrest1;

    B2 = Bank(Principal,Time,Intrest1);
    B2.Print_Balance();
    return 0;
} 