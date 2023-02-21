#include<iostream>
using namespace std;

class test
{
private:
    int n;
public:
    test();
    ~test();
};

test::test()
{
    n=10;
    cout<<"Number = "<<n<<endl;
}

test::~test()
{
    cout<<"Object is destroyed.";
}

int main()
{
    test t;
    
    return 0;
}