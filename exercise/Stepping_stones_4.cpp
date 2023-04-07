#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int m, sum = 0, a;
        cin >> m;

        for (int i = 0; i < m; i++)
        {
            cin >> a;
            sum += a;
        }
        if (m >= sum)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
            /* code */
        }
    }

    return 0;
}