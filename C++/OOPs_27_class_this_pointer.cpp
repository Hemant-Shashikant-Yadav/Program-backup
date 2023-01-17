#include <iostream>
using namespace std;

// class A
// {
// private:
//     /* data */
//     int a;

// public:
//     void set_data(int a)
//     {
//         this->a = a;
//     }
//     void get_data()
//     {
//         cout << "a = " << a;
//     }
// };

// int main()
// {
//     A a;
//     a.set_data(5);
//     a.get_data();
//     return 0;
// }

class A
{
private:
    /* data */
    int a;

public:
    A &set_data(int a)
    {
        this->a = a;
        return (*this);
    }
    void get_data()
    {
        cout << "a = " << a;
    }
};

int main(int argc, char const *argv[])
{
    A a;
    a.set_data(5).get_data();
    return 0;
}
