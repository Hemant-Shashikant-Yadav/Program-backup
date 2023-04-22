
#include <iostream>
using namespace std;

/*
Number             sports
  |                  |
  |                  |
  |                  |
  |                  |
Marks                |
  |                  |
  |                  |
  |                  |
  |-------------------
  |
  |
  |
  |
Result

*/
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
    int getNumber()
    {
        return num;
    }
};

class Marks : public Number
{
protected:
    int mrk;

public:
    Marks() : Number()
    {
        mrk = 0;
    }
    ~Marks() {}
    void SetData()
    {
        Number::SetData();
        cout << "\nMarks = ";
        cin >> mrk;
    }
    void display()
    {
        cout << "Marks = " << mrk << endl;
    }
    int getMarks()
    {
        return mrk;
    }
};

class Sports
{
protected:
    int Smark;

public:
    Sports()
    {
        Smark=0;
    }
    ~Sports() {}
    void SetData()
    {
        cout << "\nSports marks = ";
        cin >> Smark;
    }
    void display()
    {
        cout << "Sports marks = " << Smark << endl;
    }
    
};

class Result : public Marks,
               public Sports
{
protected:
    int Total;

public:
    Result() : Marks(), Sports()
    {
        Total = 0;
    }
    ~Result() {}

    void setData()
    {
        Marks::SetData();
        Sports::SetData();
        Total= mrk+Smark;

    }

   
    void display()
    {
        Marks::display();
        Sports::display();

        cout << "\nTotal = " << Total << endl;
    }
};

int main()
{
    Result R;
    R.setData();
    R.display();

    return 0;
}