#include <iostream>
using namespace std;

class Result
{
    int no;
    double mrk;

public:
    Result()
    {
        no = 0;
        mrk = 0;
    }

    Result(Result &t)
    {
        no = t.no;
        mrk = t.mrk;
    }
    Result(int a, double b)
    {
        no = a;
        mrk = b;
    }
    ~Result() {}

    friend ostream &operator<<(ostream &out, Result &m)
    {
        out << "\n Roll no = " << m.no;
        out << "\n Marks = " << m.mrk;
        return out;
    }
};

class Marks
{
    int no;
    int mark[5];

public:
    Marks()
    {
        no = 0;
        for (int i = 0; i < 5; i++)
        {
            mark[i] = 0;
        }
    }
    ~Marks() {}
    int total()
    {
        int tot = 0;
        for (int i = 0; i < 5; i++)
        {
            tot += mark[i];
        }
        return tot;
    }

    friend istream &operator>>(istream &in, Marks &m)
    {
        cout << "\nRoll no = ";
        in >> m.no;
        cout << "Marks = ";
        for (int i = 0; i < 5; i++)
        {
            in >> m.mark[i];
        }
        return in;
    }

    friend ostream &operator<<(ostream &out, Marks &m)
    {
        out << "\nRollno = " << m.no;
        out << "\nMarks = ";
        for (int i = 0; i < 5; i++)
        {
            cout << m.mark[i] << " ";
        }
        return out;
    }

    double avg()
    {
        return total() / 5.0;
    }
    operator int()
    {
        return no;
    }
    operator double()
    {
        return total() / 5.0;
    }
    operator Result()
    {
        int a = *this;
        double b = *this;
        Result k(a, b);
        return k;
    }
};

int main()
{
    Marks P;
    cin >> P;
    cout << P;
    Result R;
    R = P;
    cout << R;

    return 0;
}