#include <iostream>
using namespace std;

int main()
{
    cout << "Enter number = ";
    int num;
    cin >> num;

    cout << "Table = " << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << num * i << endl;
    }

    return 0;
}