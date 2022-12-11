#include <iostream>
using namespace std;

int main()
{
    // New operator
    int *p = new int(50);
    float *q = new float(45.54);

    cout << "P = " << *p << endl;
    cout << "Q = " << *q << endl;

    // Delete operator
    delete p, q;

    cout << "P = " << *p << endl;
    cout << "Q = " << *q << endl;

    int *arr = new int[5];
    cout << "Enter array data = " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> *(arr + i);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "The value at arr " << i << " is = " << *(arr + i) << endl;
    }
    delete[] arr;
    for (int i = 0; i < 5; i++)
    {
        cout << "The value at arr " << i << " is = " << *(arr + i) << endl;
    }

    return 0;
}