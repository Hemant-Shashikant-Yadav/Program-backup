#include <iostream>
using namespace std;

template <class T>
void input(T &a)
{
    cout << "Enter data = ";
    cin >> a;
}

template <class T>
void display(T &a)
{
    cout << "Data = " << a << endl;
}

int main()
{
    int x;
    char y;
    double z;

    input(x);
    display(x);
    input(y);
    display(y);
    input(z);
    display(z);

    return 0;
}