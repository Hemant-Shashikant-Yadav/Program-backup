#include <iostream>
using namespace std;

int main()
{
    // int a[10], sum = 0;
    // cout << "Enter numbers = ";
    // for (int i = 0; i < 10; i++)
    // {
    //     cin >> a[i];
    //     sum += a[i];
    // }
    // cout << "sum = " << sum;

    int b, Sum = 0;
    cout << "Enter numbers = ";
    for (int i = 0; i < 10; i++)
    {
        cin >> b;
        Sum += b;
    }
    cout << "sum = " << Sum << endl;
    cout << "Avg = " << Sum / 10;

    return 0;
}
// imput 10 find max
//  check prime
//  factorial