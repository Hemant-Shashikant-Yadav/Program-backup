#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, tot;

        cin >> n >> a >> b;

        tot = (180 + n) * 2;

        int c = a + b;

        int d = tot - c;

        cout << d << endl;
    }

    return 0;
}