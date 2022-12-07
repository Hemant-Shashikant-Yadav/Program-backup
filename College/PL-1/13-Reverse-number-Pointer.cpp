/*
Program to reverse digit of number using pointer
*/

#include <iostream>
using namespace std;

void rev_num(int *num);
int main()
{
    int num;

    cout << "Enter a number = "; 
    cin >> num;

    rev_num(&num);

    cout << "reversed num = " << num;
    return 0;
}
void rev_num(int *num)
{
    int temp = *num;
    // int rev = 0;
    *num = 0;
    while (temp > 0)
    {
        // rev = rev * 10 + (temp % 10);
        *num = *num * 10 + (temp % 10);
        temp /= 10;
    }
    // *num = rev;
}
