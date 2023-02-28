#include <iostream>
using namespace std;

void replicate(char ch, int n = 5)
{
    int i = 1;
    cout << "\nOutput = ";
    while (i <= n)
    {
        cout << ch;
        i++;
    }
}

int main()
{
    replicate('A');
    replicate('#', 7);
    return 0;
}