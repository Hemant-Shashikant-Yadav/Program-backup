#include <iostream>
using namespace std;

int main()
{
    int t, n, k, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        cin >> n >> k;
        if (k == 0)
        {
            if (n % 4 != 0)
                cout<<"on"<<endl;
            else
                cout<<"off"<<endl;
        }
        else
        {
            if (n % 4 != 0)
                cout<<"Ambiguous"<<endl;
            else
                cout<<"on"<<endl;
        }
    }
    return 0;
}