#include <iostream>
using namespace std;

template <class T>
class Sample
{
    T var[5];

public:
    void setData();
    void display();
};

template <class T>
void Sample<T>::setData()
{
    cout << "\nData = ";
    for (int i = 0; i < 5; i++)
    {
        cin >> var[i];
    }
}
void Sample<T>::display()
{
    cout << "Data = ";
    for (int i = 0; i < 5; i++)
    {
        cout << var[i] "  s";
    }
}

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