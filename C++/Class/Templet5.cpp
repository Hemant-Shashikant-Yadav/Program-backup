#include <iostream>
using namespace std;

template <class T>
class Sample
{
    T var;

public:
    void setData()
    {
        cout << "Enter data = ";
        cin >> var;
    }
    void display()
    {
        cout << "Data = " << var << endl;
    }
};

int main()
{
    Sample<int> p;
    Sample<float> q;
    p.setData();
    p.display();
    q.setData();
    q.display();

    return 0;
}