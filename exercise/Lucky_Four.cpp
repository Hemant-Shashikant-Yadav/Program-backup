#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, count = 0;

        cin >> n;

        while (n > 0)
        {
            int dig = n % 10;
            if (dig == 4)
            {
                count++;
            }
            n /= 10;
        }
        cout<<count<<endl;
    }

    return 0;
}