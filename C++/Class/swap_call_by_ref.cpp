#include <iostream>
using namespace std;
// C method
// void swap(int &, int &);
// int main()
// {
//     int a, b;
//     cout << "Enter two numbers = ";
//     cin >> a >> b;

//     cout << "A = " << a << " B = " << b << endl;
//     swap(a, b);

//     cout << "A = " << a << " B = " << b << endl;

//     return 0;
// }
// void swap(int &p, int &q)
// {
//     int r = p;
//     p = q;
//     q = r;
// }

// C++ method
void swap(int &p, int &q)
{
    int r = p;
    p = q;
    q = r;
}
int main()
{
    int a, b;
    cout << "Enter two numbers = ";
    cin >> a >> b;

    cout << "A = " << a << " B = " << b << endl;
    swap(a, b);

    cout << "A = " << a << " B = " << b << endl;

    return 0;
}