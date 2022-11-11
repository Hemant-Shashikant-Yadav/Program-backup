#include <iostream>
using namespace std;

class Number
{

    int n;
public:
    void setdata()
    {
        cout<<"Enter the number = ";
        cin>>n;
        checkprime();
    }
    void checkprime()
    {
        int i;
        for (i=2;i<n;i++)
        {
            if(n%i==0)
            {
                break;
            }
        }
        if (i==n)
        {
            cout<<"Number is prime"<<endl;
        }
        else
        {
            cout<<"number is not prime"<<endl;
        }
        
    }
    void evenodd()
    {
        if(n%2==0)
        {
            cout<<"Even"<<endl;
        }
        else
        {
            cout<<"Odd"<<endl;
        }
        
    }

};

int
main()
{
    Number n;
    n.setdata();
    n.evenodd();
    // n.checkprime();
    return 0;
}