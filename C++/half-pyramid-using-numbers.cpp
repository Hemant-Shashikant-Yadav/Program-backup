#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number = ";
    cin>>num;

    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=num; j++)
        {
            if(j<=num-i)
            {
                cout<<"  ";
            }
            else
            {
                cout<<" "<<i;    
            }
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    for(int i=1; i<=num; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<" "<<i;    
            
        }
        cout<<endl;
    }
    return 0;
}