#include <iostream>
using namespace std;

int main()
{
    int no, i;
    cout << "Enter number = ";
    cin >> no;

    for (i = 2; i < no; i++)
    {
        if (no % i == 0)
        {
            break;
        }
    }
    if (i != no)
    {
        cout << "The number is not prime.";
    }
    else
    {
        cout << "The number is prime.";
    }

    return 0;
}