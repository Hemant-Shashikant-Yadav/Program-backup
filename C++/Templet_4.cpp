#include <iostream>
using namespace std;

void func(int a)
{
    cout << "The regular fuction is called. A = " << a << endl;
}

template<class T>
void func(T a)
{
    cout << "The templetised fuction is called. A = " << a << endl;
}

template<class T>
void func2(T a)
{
    cout << "The templetised fuction is called. A = " << a << endl;
}

int main()
{
    func(10);
    func2(10);
    return 0;
}