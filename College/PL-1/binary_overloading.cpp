#include <iostream>
using namespace std;

class Binary
{
    int num1, num2;

public:
    Binary()
    {
        num1 = 0;
        num2 = 0;
    }
    Binary(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void display()
    {
        cout << "num1 " << num1 << " num2 " << num2;
    }

    Binary operator+(Binary &obj)
    {
        Binary res;
        res.num1 = num1 + obj.num1;
        res.num2 = num2 + obj.num2;

        return res;
    }
};
int main()
{
    Binary N1(10, 15), N2(12, 10);
    N1.display();
    N2.display();
    Binary N3 = N1 + N2;
    N3.display();
    return 0;
}