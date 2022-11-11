#include <iostream>
using namespace std;

class Number
{
    
private:
    int a;

public:
    void Scan_num(void);
    void even_odd(void);
};

void Number ::Scan_num(void)
{
    cout << "Enter the number = ";
    cin >> a;
}
void Number ::even_odd(void)
{
    if (a % 2 == 0)
    {
        cout << "The number " << a << " is even" << endl;
    }
    else
    {
        cout << "The number " << a << " is odd" << endl;
    }
}

int main()
{
    Number num;
    num.Scan_num();
    num.even_odd();
    return 0;
}