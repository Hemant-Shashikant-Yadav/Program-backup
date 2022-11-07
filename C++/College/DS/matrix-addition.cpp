#include <iostream>
using namespace std;

int Arr(int a[100][100], int b[100][100], int c[100][100], int n);

int main()
{
    int a[100][100], b[100][100], c[100][100], n;

    cout << "Enter size of matrix = ";
    cin >> n;

    cout << "Enter matrix 1 = " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter matrix 2 = " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }

    Arr(a, b, c, n);

    cout << "\vThe addition of two matrix is = " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << c[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}
int Arr(int a[100][100], int b[100][100], int c[100][100], int n)
{
    static int i = 0, j = 0;
    if (i < n)
    {
        if (j < n)
        {
            c[i][j] = a[i][j] + b[i][j];
            j++;
            Arr(a, b, c, n);
        }
        j=0;
        i++;
        Arr(a, b, c, n);
    }
}