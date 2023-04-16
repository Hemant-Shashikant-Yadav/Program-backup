
#include <iostream>
using namespace std;

class Number
{
    protected:
    int num;

public:
    Number()
    {
        num = 0;
    }
    ~Number() {}
    void SetData()
    {
        cout << "\nNumber = ";
        cin >> num;
    }
    void display()
    {
        cout << "Number = " << num << endl;
    }
    int GetMarks()
    {
        return num;
    }
};

class Name : public Number
{
protected:
    char name[10];

public:
    Name():Number()
    {
        name[0]='\0';
    }
    ~Name() {}
    void SetData()
    {
        Number::SetData();
        cout << "\nName = ";
        cin >> name;
    }
    void display()
    {
        Number::display();
        cout << "Name = " << name << endl;
    }
    char *getname()
    {
        return name;
    }
};

class Marks : public Name
{
protected:
    double mrk;

public:
    Marks():Name()
    {
        mrk = 0.0;
    }
    ~Marks() {}
    void SetData()
    {
        Name::SetData();
        cout << "\nMarks = ";
        cin >> mrk;
    }
    void display()
    {
        Name::display();
        cout << "Marks = " << mrk << endl;
    }
    double GetMarks()
    {
        return mrk;
    }
};

int main()
{
    Number a;
    a.SetData();
    a.display();

    Name b;
    b.SetData();
    b.display();

    Marks c;
    c.SetData();
    c.display();
    return 0;
}