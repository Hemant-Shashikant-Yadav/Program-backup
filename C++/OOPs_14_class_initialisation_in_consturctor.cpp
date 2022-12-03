#include<iostream>
using namespace std;

class base
{
private:
    int a; int b;
public:
    base(int i, int j);
    
};

base::base(int i, int j)
{
    cout<<"Value of A is = "<<a<<endl;
    cout<<"Value of B is = "<<b<<endl;
}


int main()
{
    
    return 0;
}