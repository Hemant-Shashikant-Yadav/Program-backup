#include <iostream>
using namespace std;

inline int square(int n)
{
    return n * n;
}
inline int cube(int n)
{
    return n * n * n;
}

int main()
{
    int a;
    cout << "Enter no = ";
    cin >> a;
    cout << "Square of = " << a << " is = " << square(a) << endl;
    cout << "Cube of = " << a << " is = " << cube(a);

    return 0;
}