#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n, q;
    cin >> n >> q;

    int *arr[n];

    int i = 0, j;

    while (i < n)
    {
        int noOfElements;
        cin >> noOfElements;

        arr[i] = (int*)malloc(noOfElements * sizeof(int));

        for (int j = 0; j < noOfElements; j++)
        {
            cin >> *(*(arr + i) + j);
        }

        i++;
    }

    while (q--)
    {
        cin >> i >> j;
        cout << *(*(arr + i) + j) << endl;
    }

    return 0;
}