#include <iostream>
using namespace std;

class Marks
{
private:
    /* data */
public:
    int Rno;
    int Mrk[5];
    Marks(/* args */);
    Marks(Marks &);
    int total();
    friend istream &operator>>(istream &, Marks &);
    friend ostream &operator<<(ostream &, Marks &);
    double average()
    {
        return total() / 5.0;
    }
    int operator==(int no)
    {
        return (Rno == no);
    }
    int operator>(int mr)
    {
        return (total() > mr);
    }
    int operator<(int mr)
    {
        return (total() < mr);
    }
    ~Marks() {}
};

Marks::Marks(/* args */)
{
    Rno = 0;
    for (int i = 0; i < 5; i++)
    {
        Mrk[i] = 0;
    }
}
Marks::Marks(Marks &t)
{
    Rno = t.Rno;
    for (int i = 0; i < 5; i++)
    {
        Mrk[i] = t.Mrk[i];
    }
}
int Marks::total()
{
    int tot = 0;
    for (int i = 0; i < 5; i++)
    {
        tot += Mrk[i];
    }
    return tot;
}

istream &operator>>(istream &in, Marks &m)
{
    cout << "\n Roll no = ";
    in >> m.Rno;
    cout << "\nMarks = ";
    for (int i = 0; i < 5; i++)
    {
        in >> m.Mrk[i];
    }
    return in;
}
ostream &operator<<(ostream &out, Marks &m)
{
    out << "\n Roll no = " << m.Rno;
    out << "\nMarks = ";
    for (int i = 0; i < 5; i++)
    {
        out << m.Mrk[i] << " ";
    }
    return out;
}

int main()
{
    Marks p;
    cin >> p;
    cout << p;
    cout << "\nTotal = " << p.total();
    cout << "\nAvg = " << p.average();
    return 0;
}