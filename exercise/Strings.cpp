#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string a, b;

    cin >> a;
    cin >> b;

    cout << a.size() << " "
         << b.size() << endl;

    cout << a + b << endl;

    char ch = a[0];
    a[0] = b[0];
    b[0] = ch;

    cout << a << " " << b << endl;

    return 0;
}