// Create a header file result.h and define class Result
#include<iostream>
using namespace std;



class Result
{
    int no;
    double mark;

public:
    Result()
    {
        no = 0;
        mark = 0.0;
    }
    void setData(int a)
    {
        no = a;
        cout << "Marks = ";
        cin >> mark;
    }
    void setData()
    {
        cout << "Roll no = ";
        cin >> no;
        cout << "Marks = ";
        cin >> mark;
    }
    int getNo()
    {
        return no;
    }
    double getMarks()
    {
        return mark;
    }

    void display()
    {
        cout << "Roll no = " << no << endl;
        cout << "Marks = " << mark << endl;
    }
};

