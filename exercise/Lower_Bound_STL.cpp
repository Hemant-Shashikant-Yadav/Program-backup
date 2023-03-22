// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, q, y;
//     cin >> n;
//     int x[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> x[i];
//     }

//     cin >> q;

//     while (q--)
//     {
//         cin >> y;

//         for (int i = 0; i < n; i++)
//         {
//             if (x[i] == y)
//             {
//                 cout << "Yes " << i + 1 << endl;
//                 break;
//             }
//             else if (x[i] > y)
//             {
//                 cout << "NO " << i << endl;
//                 break;
//             }
//         }
//     }

//     return 0;
// }

 #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    
    int n, q, y;
    cin >> n;
    int x[n];
    vector<int> v(x,x+n);

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    cin >> q;
vector<int>::iterator low,up;
    while (q--)
    {
        cin >> y;

        low= lower_bound(v.begin(),v.end(),y);
        cout<<(low- v.begin())<<endl;
    }
    return 0;
}
