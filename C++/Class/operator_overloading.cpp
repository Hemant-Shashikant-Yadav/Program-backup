#include <iostream>
using namespace std;

#define M 5

class Result
{
    int Rno;
    int Mrk;

public:
    Result()
    {
        Rno = Mrk = 0;
    }
    Result(int a, int b)
    {
        Rno = a;
        Mrk = b;
    }
    Result(Result &t)
    {
        Rno = t.Rno;
        Mrk = t.Mrk;
    }
    ~Result()
    {
    }

    friend istream &operator>>(istream &in, Result &r)
    {
        cout << "\nRoll no = ";
        in >> r.Rno;
        cout << "Marks = ";
        in >> r.Mrk;
        return in;
    }
    friend ostream &operator<<(ostream &out, Result &r)
    {
        out << "\nRoll no = " << r.Rno << "\nMarks = " << r.Mrk;
        return out;
    }

    Result operator+(int n)
    {
        Result t(Rno, Mrk + n);
        return t;
    }
    Result operator-(int n)
    {
        Result t(Rno, Mrk - n);
        return t;
    }
    int operator==(int no)
    {
        return (Rno == no);
    }
};

int main()
{
    Result P, Q, R(6, 13);
    // cin >> P;
    // cout << P;
    // Q=P+3;
    // cout<<Q;
   
   
    cout << R;
    Q = R + 10;
    cout << Q;
    Result S;
    cin >> S;
    cout << S;
    return 0;
}