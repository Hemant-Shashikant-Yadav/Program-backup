#include <iostream>
using namespace std;

int main()
{
    int ar[] = {10, 3, 5, 4, 5, 3, 4};
    int res = ar[0];

    for (int i = 1; i < 7; i++)
    {
        res = res^ ar[i];
    }
    cout << res;

    return 0;
}