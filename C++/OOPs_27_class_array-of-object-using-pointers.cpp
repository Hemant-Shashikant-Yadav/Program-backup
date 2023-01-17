#include <iostream>
using namespace std;

class Store
{
    int id;
    float price;

public:
    void set_data(int a, float b);
    void get_data();
};

void Store::set_data(int a, float b)
{
    id = a;
    price = b;
}
void Store::get_data()
{
    cout << "The id of item = " << id << endl;
    cout << "The price of item = " << price << endl;
}

int main()
{
    int size = 3;
    Store *ptr = new Store[size];
    Store *tempPtr = ptr;
    int a;
    float b;
    int i = 0;

    for (i = 0; i < size; i++)
    {
        cout << "Enter id of item " << i + 1 << " is = ";
        cin >> a;
        cout << "Enter price of item " << i + 1 << " is = ";
        cin >> b;
        ptr->set_data(a, b);
        ptr++;
    }
    ptr= ptr - 3;
    for (i = 0; i < size; i++)
    {
        cout << "Item number " << i + 1 << " = ";
        ptr->get_data();
        ptr++;
    }

    return 0;
}