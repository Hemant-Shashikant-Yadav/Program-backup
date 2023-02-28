#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    ptr = new int[5];
    int i = 0;
    while (i < 5)
    {
        cin >> ptr[i];
        i++;
    }
    cout << "Data = ";
    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i] << endl;
    }
    delete[] ptr;

    return 0;
}