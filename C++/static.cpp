#include <iostream>
using namespace std;

int product(int a, int b);
int main()
{
    int a, b;

    cout << "Enter two numbres = ";
    cin >> a >> b;

    cout << "The calcultion of a*b+c (C++) is =" << product(a, b) << endl;
    cout << "The calcultion of a*b+c (C++) is =" << product(a, b) << endl;
    cout << "The calcultion of a*b+c (C++) is =" << product(a, b) << endl;
    cout << "The calcultion of a*b+c (C++) is =" << product(a, b) << endl;
    cout << "The calcultion of a*b+c (C++) is =" << product(a, b) << endl;
    cout << "The calcultion of a*b+c (C++) is =" << product(a, b) << endl;
    cout << "The calcultion of a*b+c (C++) is =" << product(a, b) << endl;
    cout << "The calcultion of a*b+c (C++) is =" << product(a, b) << endl;
    cout << "The calcultion of a*b+c (C++) is =" << product(a, b) << endl;
    cout << "The calcultion of a*b+c (C++) is =" << product(a, b) << endl;
    cout << "The calcultion of a*b+c (C++) is =" << product(a, b) << endl;
    return 0;
}
int product(int a, int b)
{
    static int c = 0;
    c += 1;  
    return a * b + c;
}