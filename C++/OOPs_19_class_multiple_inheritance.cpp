#include <iostream>
#include <string.h>
using namespace std;

class student_data
{
protected:
    int id;
    char name[50];

public:
    void setdata();
    void getdata();
};

class student_marks : public student_data
{
protected:
    int mark[5];
    int sum = 0;
    int avg;

public:
    void getmark();
    void display();
};

class student_grade : public student_marks
{
protected:
public:
    void grade();
};

void student_data::setdata()
{
    cout << "Enter name = ";
    gets(name);
    cout << "Enter ID = ";
    cin >> id;
}
void student_data::getdata()
{
    cout << "The name = " << name << endl;
    cout << "The ID = " << id << endl;
}
void student_marks::getmark()
{
    cout << "Enter mark of 5 subject = ";
    for (int i = 0; i < 5; i++)
    {
        cin >> mark[i];
        sum += mark[i];
    }
    avg = sum / 5;
}
void student_marks::display()
{
    cout << "The marks are = ";
    for (int i = 0; i < 5; i++)
    {
        cout << "Mark " << i + 1 << " = " << mark[i] << endl;
    }
    cout << "Average  = " << avg << endl;
}
void student_grade ::grade()
{
    cout << "\vThe grade of student is = ";
    switch (avg / 10)
    {
    case 10:
    case 9:
        cout << "A grade";
        break;
    case 8:
        cout << "B grade";
        break;
    case 7:
        cout << "C grade";
        break;
    case 6:
        cout << "D grade";
        break;
    case 5:
        cout << "E grade";
        break;

    default:
        cout << "FF Fail!!!";
        break;
    }
}

int main()
{
    student_data d;
    student_grade g;
    student_marks m;
    m.setdata();

    m.getmark();

    m.getdata();
    m.display();
    g.grade();
    return 0;
}