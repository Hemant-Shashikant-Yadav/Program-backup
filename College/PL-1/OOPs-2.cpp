#include <iostream>
using namespace std;

class Marks
{
    int sum = 0;
    int sub[5];

public:
    void getdata();
    void Total();
    void Grade();
    void Display();
};

void Marks::getdata()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter marks of subject " << i + 1 << " out of 100 = ";
        cin >> sub[i];
    }
}

void Marks::Total()
{
    for (int i = 0; i < 5; i++)
    {
        sum += sub[i];
    }

    cout << "\vThe sum of all 5 sumbject out of 500 is = " << sum << endl;
    cout << "The average of all 5 sumbject out of 500 is = " << sum / 5 << endl;
}

void Marks::Display()
{
    for (int i = 0; i < 5; i++)
    {
        cout<<"\vThe mark od subject "<<i+1<<" is = "<<sub[i];
    }
    
}

void Marks::Grade()
{
    int avg = sum / 5;
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
    Marks m1;
    m1.getdata();
    m1.Display();
    m1.Total();
    m1.Grade();

    return 0;
}