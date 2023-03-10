#include <iostream>
using namespace std;

class Student
{
private:
    int Roll_no;
    char Name[15];

public:
    void Set_data()
    {
        cout << "Enter roll no = ";
        cin >> Roll_no;

        cout << "Enter name = ";
        cin >> Name;
    }

    void Display()
    {
        cout << "Roll no = " << Roll_no << endl;
        cout << "Name = " << Name << endl;
    }

    int getNo()
    {
        return Roll_no;
    }

    char *getName()
    {
        return Name;
    }
};

int main()
{
    Student S,SS;

    S.Set_data();
    S.Display();

    SS.Set_data();
    SS.Display();
    return 0;
}