#include <iostream>
using namespace std;

class Number
{
    int num1, num2;

public:
   

    Number(int n1 =0 , int n2 =0)
    {
        num1 = n1;
        num2 = n2;
    }

    void displayNum()
    {
        cout << "Number 1 = " << num1 << endl;
        cout << "Number 2 = " << num2 << endl;
    }

    Number operator -(Number  &obj)
    {
        Number res;
        res.num1=num1-obj.num1;
        res.num2=num2-obj.num2;
        return res;
    }
};

int main()
{
    Number N1(50, 25), N2(15, 14);
    N1.displayNum();
    N2.displayNum();

    Number N3 = N1 - N2;
    N3.displayNum();
    return 0;
}