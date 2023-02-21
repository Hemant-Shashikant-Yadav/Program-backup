#include <iostream>
using namespace std;

int main()
{
    int a[10], max = 0;
    cout << "Enter numbers = ";
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
        if (a[i] >= max)
        {
            max = a[i];
        }
    }
    cout << "Max = " << max;
    return 0;
}