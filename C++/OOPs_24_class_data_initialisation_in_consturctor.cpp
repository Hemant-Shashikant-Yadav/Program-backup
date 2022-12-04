#include<iostream>
using namespace std;

class base
{
private:
    // int a; int b; 1&2
    int b; int a;
public:
    base(int i, int j);
    
};

// base::base(int i, int j) : a(i),b(j)
// base::base(int i, int j) : a(i+10),b(j+5)
// base::base(int i, int j) : a(i*10),b(j*5)
// base::base(int i, int j) : a(i/10),b(j*5)
// base::base(int i, int j) : a(i),b(j+a)
// base::base(int i, int j) : a(i),b(j+b)  INVALID 1.
// base::base(int i, int j) : a(i+b),b(j) INVALID 2.
// base::base(int i, int j) : a(i+b),b(j) VALID 
base::base(int i, int j) : a(i+b),b(j)
{
    cout<<"Value of A is = "<<a<<endl;
    cout<<"Value of B is = "<<b<<endl;
}


int main()
{
    base B(10,20);
    
    return 0;
}