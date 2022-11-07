#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, n;
    cout<<"Enter the number of testcase = ";
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        cout<<"Enter the number = ";
        cin>>n; 

        if (n%2==0 && n%3==0)   
        {
            cout<<"The number is devisible by both 2 & 3";
        }
        else if (n%2==0 || n%3==0)
        {
            
            if (n%2==0)   
            {
                cout<<"The number is devisible by 2";
            }
            else
            {
                cout<<"The number is devisible by 3";
            }
        }
        else
        {
            cout<<"The number is not devisible by both 2 & 3";
        }
           
                
    }
    
    return 0;
}
