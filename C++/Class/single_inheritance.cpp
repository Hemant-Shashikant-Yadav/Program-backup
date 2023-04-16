#include <iostream>
using namespace std;

class Number
{
    int no;

public:
    Number()
    {
        no = 0;
    }
    Number(int no)
    {
        this->no = no;
    }
    ~Number() {}

    void setNo()
    {
        cout << "No = ";
        cin >> no;
    }
    void displayNo()
    {
        cout << "No = " << no<<endl;
    }
    int getNo()
    {
        return no;
    }
};

class Result : public Number
{
    double mrk;

public:
    Result() : Number()
    {
        mrk = 0;
    }

    Result(int a, double b) : Number(a)
    {
        mrk = b;
    }
    ~Result() {}

    void setMarks()
    {
        cout << "Mark = ";
        cin >> mrk;
    }
    void displayMarks()
    {
        cout << "Mark = " << mrk<<endl;
    }
    int getNo()
    {
        return mrk;
    }
};

int main()
{
    Result a;
    a.setNo();
    a.setMarks();
    a.displayNo();
    a.displayMarks();

    Result b(5,6.7);
    b.displayNo();
    b.displayMarks();

    return 0;
}