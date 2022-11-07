#include <iostream>
#include <string.h>
using namespace std;

class binary
{
    string a;

public:
    void Binary_in(void);
    void Binary_out(void);
    void Binary_once(void);
    void check_binary(void);
};

void binary::Binary_in(void)
{
    cout << "Enter a Binary number = ";
    cin >> a;
    Binary_out();
}

void binary ::Binary_out(void)
{
    cout << "Entered number is = ";
    for (int i = 0; i < a.length(); i++)
    {
        cout << a.at(i);
    }
    cout << endl;
   
    check_binary();
}

void binary ::check_binary(void)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a.at(i) != '1' && a.at(i) != '0')
        {
            cout << "The number is not binary." << endl;
            exit(0);
        }
    }
}

void binary ::Binary_once(void)
{
    for (int i = 0; i < a.length(); i++)
    {
        if (a.at(i) == '0')
        {
            a.at(i) = '1';
        }
        else
        {
            a.at(i) = '0';
        }
    }
    cout << "Once complement of entered number is = " << a;
}

int main()
{
    binary num;

    num.Binary_in();
    num.Binary_once();

    return 0;
}