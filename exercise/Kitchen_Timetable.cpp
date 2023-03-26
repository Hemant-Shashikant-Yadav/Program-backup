#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n], b[n], temp, count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++)
        {

            if (i == 0)
            {
                if (a[i] >= b[i])
                    count += 1;
            }
            else
            {
                if ((a[i] - a[i - 1]) >= b[i])
                    count += 1;
            }
        }
        cout << count << endl;
    }

    return 0;
}