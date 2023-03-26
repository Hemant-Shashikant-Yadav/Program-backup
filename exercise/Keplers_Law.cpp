#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        float a, b, c, d;
        cin >> a >> b >> c >> d;

        if (((a * a) / (c * c * c)) == ((b * b) / (d * d * d )))
        {
            cout << "Yes" << endl;
            /* code */
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}