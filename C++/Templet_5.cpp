#include <iostream>
using namespace std;

template <class T>
class function
{
public:
    T a;
    function(T x)
    {
        a = x;
    }

    void display();
};

template <class Z>
void function<Z>::display()
{
    cout << "Display function is called outside the class. A = " << a << endl;
}

int main()
{
    function<int> f(10);
    function<float> f1(10.23);
    function<char> f2('H');

    f.display();
    f1.display();
    f2.display();

    return 0;
}