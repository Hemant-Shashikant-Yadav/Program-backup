#include <iostream>
using namespace std;

// C
int main()
{
    void replicate(char ch = '#', int n = 5);
    replicate('A');
    replicate('#', 7);
    return 0;
}

void replicate(char ch, int n)
{
    int i = 1;
    cout << "\nOutput = ";
    while (i <= n)
    {
        cout << ch;
        i++;
    }
}