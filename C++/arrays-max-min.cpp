#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;


    int array [n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    int maxno=INT_MIN;
    int minno=INT_MAX;

    for (int i = 0; i < n; i++)
    {
        maxno=max(maxno,array[i]);
        minno=min(minno,array[i]);
    }

    cout<<maxno<<endl<<minno;
        
    return 0;
}
