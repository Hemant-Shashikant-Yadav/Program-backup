#include <iostream>
using namespace std;

template <class T1, class T2>

class vector
{
private:
    T1 data1;
    T2 data2;

public:
    vector(T1 a, T2 b)
    {
        this->data1 = a;
        this->data2 = b;
    }

    void dispaly()
    {
        cout << "Data1 = " << this->data1 << endl;
        cout << "Data2 = " << this->data2 << endl;
    }
};

int main()
{
    vector<int, float> obj('a', 5.5);

    obj.dispaly();

    return 0;
}