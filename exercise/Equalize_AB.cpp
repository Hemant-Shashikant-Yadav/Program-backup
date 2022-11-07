#include<iostream>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int a,b,x;
        cin>>a>>b>>x;

        a=a+x;
        b=b-x;

        if (a==b)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
    }
    
    return 0;
}