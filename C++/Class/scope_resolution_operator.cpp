#include <iostream>
using namespace std;

int x = 1000;

int main()
{
    int x = 1;
    {
        int x = 10;
        {
            int x = 100;
            cout << "x = " << x << "X = " << ::x << endl;
        }
        cout << "x = " << x << "X = " << ::x << endl;
    }
    cout << "x = " << x << "X = " << ::x << endl;
    return 0;
}