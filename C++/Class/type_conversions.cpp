#include <iostream>
using namespace std;

class Marks
{
    int no;
    double marks;

public:
    Marks()
    {
        no = 0;
        marks = 0;
    }
    Marks(int a, double b)
    {
        no = a;
        marks = b;
    }
    ~Marks() {}
    operator int()
    {
        return no;
    }

    operator double()
    {
        return marks;
    }

    friend istream &operator>>(istream &in, Marks &m)
    {
        cout << "\n No = ";
        in >> m.no;
        cout << "\n Marks = ";
        in >> m.marks;
        return in;
    }
    friend ostream &operator<<(ostream &out, Marks &m)
    {
        out << "\n No = " << m.no;
        out << "\n Marks = " << m.marks;
        return out;
    }
};

int main()
{
    Marks m;
    cin >> m;
    cout << m;
    int a = m;
    double b = m;
    cout << "\nRoll no = " << a;
    cout << "\nMarks = " << b;

    return 0;
}