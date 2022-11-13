#include <iostream>
using namespace std;

class Marks
{
    int sub[5];
    int sum = 0;

public:
    void setdata()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter marks of subject = ";
            cin >> sub[i];
        }
    }
    void total()
    {

        for (int i = 0; i < 5; i++)
        {
            sum = sum + sub[i];
        }
        cout << "\vThe sum of all subject is = " << sum << endl;
        cout << "The average of all subject is = " << sum / 5 << endl;
    }
    void grade()
    {
        int grade = sum / 5;
        if (grade <= 100 && grade >= 91)
        {
            cout << "The grade of student is = A grade";
        }
        else if (grade <= 90 && grade >= 81)
        {
            cout << "The grade of student is = B grade";
        }
        else if (grade <= 80 && grade >= 71)
        {
            cout << "The grade of student is = C grade";
        }
        else if (grade <= 70 && grade >= 61)
        {
            cout << "The grade of student is = D grade";
        }
        else if (grade <= 60 && grade >= 51)
        {
            cout << "The grade of student is = E grade";
        }
        else
        {
            cout << "The grade of student is = F grade";
        }
    }
    void display()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "\vThe mark of subject = "<< sub[i];
        }
    }
};

int main()
{
    Marks M;
    M.setdata();
    M.display();
    M.total();
    M.grade();

    return 0;
}