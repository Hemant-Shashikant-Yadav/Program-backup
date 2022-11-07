#include <iostream>
using namespace std;

float interstMoney(int money, float rate = 1.10)
{
    return money * rate;
}
int main()
{
    int money; 

    cout << "Enter the amount of money = ";
    cin >> money;

    cout << "For your entered amount = " << money << "The interst for regular person is = " << interstMoney(money) << endl;
    cout << "For your entered amount = " << money << "The interst for VIP person is = " << interstMoney(money, 1.15) << endl;
    cout << "For your entered amount = " << money << "The interst for sinior citisen is = " << interstMoney(money, 1.25) << endl;
    return 0;
}
