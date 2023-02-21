#include <iostream>
using namespace std;

int main()
{
    int no, i, fact = 1;
    cout << "Enter number = ";
    cin >> no;

    for (i = 2; i <= no; i++)
    {
        fact *= i;
    }
    cout << "Factorial = " << fact;
    return 0;
}