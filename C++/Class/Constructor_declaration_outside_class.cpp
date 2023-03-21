#include <iostream>
#include <iomanip>
using namespace std;

class Array
{
private:
    int x[5];

public:
    Array();
    Array(int);
    Array(Array &T);
    ~Array();

    void setData();
    void display();
    int total();
    int avg();
};

Array::Array()
{
    for (int i = 0; i < 5; i++)
    {
        x[i] = 0;
    }
}
Array::Array(int value)
{
    for (int i = 0; i < 5; i++)
    {
        x[i] = value;
    }
}
Array::Array(Array &T)
{
    for (int i = 0; i < 5; i++)
    {
        x[i] = T.x[i];
    }
}

void Array::setData()
{
    cout << "Enter data = ";
    for (int i = 0; i < 5; i++)
    {
        cin >> x[i];
    }
}
void Array::display()
{
    cout << "Data = ";
    for (int i = 0; i < 5; i++)
    {
        cout << setw(5) << x[i] << " ";
    }
}
int Array::total()
{
    int tot = 0;
    for (int i = 0; i < 5; i++)
    {
        tot += x[i];
    }
    return tot;
}
int Array::avg()
{
    int tot = total(), avg = tot / 5;
    return avg;
}

Array::~Array()
{
    cout << "Destructor is called." << endl;
}

int main()
{

    Array P;
    P.display();
    P.setData();
    P.display();

    cout<<"Total = "<<P.total()<<endl;
    cout<<"Average = "<<P.avg()<<endl;
    return 0;
}