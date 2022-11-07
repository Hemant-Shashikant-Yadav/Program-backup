#include<iostream>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n,a;
        cin>>n>>a;
        while (n--)
        {
            int a1;
            cin>>a1;
            if (a>=a1)
            {
                a = a - a1;
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
          
        }
        cout<<endl;
        
    }
    
    return 0;
}