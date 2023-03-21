#include <iostream>
using namespace std;

template <class T1, class T2>
float funAVG(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

int main()
{
    // cout << "The avg of two numbers is = " << funAVG(5.2, 3.3) << endl;
    cout << "The avg of two numbers is = " << funAVG(5, 3) << endl;
    return 0;
} 