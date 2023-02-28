#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    ptr = new int(10);

    cout << "Data = ";

    cout << *ptr << endl;

    delete ptr;

    return 0;
}