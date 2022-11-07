#include <iostream>
using namespace std;

class Y;

class X
{
    friend void display(X C1, Y C2);
    friend void swap(X &C1, Y &C2);
    int X;

public:
    void DataIN(void)
    {
        cout << "Enter number 1 = ";
        cin >> X;
    }
};

class Y
{
    friend void display(X C1, Y C2);
    friend void swap(X &C1, Y &C2);
    int Y;

public:
    void DataIN(void)
    {
        cout << "Enter number 2 = ";
        cin >> Y;
    }
};

void display(X C1, Y C2)
{
    cout << "A = " << C1.X << " & "
         << "B = " << C2.Y << endl;
}

void swap(X &C1, Y &C2)
{
    int temp = C1.X;
    C1.X = C2.Y;
    C2.Y = temp;
}

int main()
{
    X C1;
    Y C2;

    C1.DataIN();
    C2.DataIN();

    cout << "The numbers before swapping is = ";
    display(C1, C2);

    swap(C1, C2);

    cout << "The numbers after swapping is = ";
    display(C1, C2);

    return 0;
}