#include <iostream>
using namespace std;

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
            cout << m.mark[i]<<" ";
        }
        return out;
    }

    operator int()
    {
        return no;
    }
    operator double()
    {
        return total() / 5.0;
    }
};

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
    ~Result() {}

    Result(Marks &t)
    {

        no = t;
        mrk = t;
    }

    friend ostream &operator<<(ostream &out, Result &r)
    {
        out << "\n Roll no = " << r.no;
        out << "\n Marks = " << r.mrk;
        return out;
    }
};
int main()
{
    Marks m;
    cin >> m;
    Result r(m);
    cout << m;
    cout << r;

    return 0;
}