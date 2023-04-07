#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int maxDist = INT32_MIN;
        int t;
        cin >> t;
        int a[100][100];

        for (int i = 0; i < t; i++)
        {
            for (int j = 0; j < t; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < t; i++)
        {
            for (int j = 0; j < t; j++)
            {
                if (a[i][j] == 1)
                {
                    int g = a[i][j];
                    for (int k = 0; k < t; k++)
                    {
                        for (int l = 0; l < t; l++)
                        {
                            if (a[k][l] == 0)
                            {
                                int b = a[k][l];
                                int dist = abs(i - k) + abs(j - l);
                                if (maxDist < dist)
                                {
                                    maxDist = dist;
                                }

                                /* code */
                            }
                        }
                    }
                }
            }
        }
        cout << maxDist << endl;
    }

    return 0;
}