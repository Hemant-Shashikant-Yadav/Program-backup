#include<iostream>
using namespace std;

int count = 0;

class num
{
private:

public:
    num(void);
    ~num();
};

num::num(void)
{
    count++;
    cout<<"Here constructor is called for object no "<<count<<endl;
}

num::~num()
{
    cout<<"Here destructor is called for object no "<<count<<endl;
    count--;
}


int main()
{
    cout<<"This is inside main function. "<<endl;
    cout<<"Creating first object n1"<<endl;

    num n1;
    {
        cout<<"Entering block"<<endl;
        cout<<"Creating two more object"<<endl;
        num n2,n3;
        cout<<"Exiting block"<<endl;
    }
    
    cout<<"This is inside main function. "<<endl;

    return 0;
}