#include <iostream>
using namespace std;

int Fact(int n);

int main()
{
    int n;
    cout << "Enter a number = ";
    cin >> n;

    int ans = Fact(n);
    cout << "The factorial of number " << n << " is " << ans;
    return 0;
}
int Fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * Fact(n - 1);
    }
}