#include <iostream>
using namespace std;

class complex
{
private:
    int real, imag;

public:
    void set_data();
    void get_data();
};
void complex::set_data()
{
    cout << "Enter the real part = ";
    cin >> real;
    cout << "Enter the imaginary part = ";
    cin >> imag;
}
void complex::get_data()
{
    cout << "The real part = " << real << endl;
    cout << "The imaginary part = " << imag << endl;
}

int main()
{
    // complex C;
    // complex *ptr = &C;
    // (ptr)->set_data();
    // (ptr)->get_data();

    complex *ptr = new complex;
    // complex *ptr = new complex[5];  Array of 5 object. Which points to first object.
    ptr->set_data();
    ptr->get_data();
    return 0;
}