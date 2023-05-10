#include <iostream>
using namespace std;

template <class T>
void swap(T *a, T *b)
{
    T c;
    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int x = 5;
    int y = 7;
    cout << "X = " << x << endl
         << "Y = " << y << endl;
    swap(&x, &y);
    cout << "X = " << x << endl
         << "Y = " << y << endl;

    float x1 = 5.95;
    float y1 = 7.46;
    cout << "X = " << x1 << endl
         << "Y = " << y1 << endl;
    swap(&x1, &y1);
    cout << "X = " << x1 << endl
         << "Y = " << y1 << endl;

    return 0;
}