#include <iostream>
using namespace std;

class student
{
private:
    int id;
    char name[100];

public:
    void get_student()
    {
        cout << "Enter name = ";
        gets(name);
        cout << "Enter id = ";
        cin >> id;
    }
    void display_student()
    {
        cout << "Name of student = ";
        puts(name);
        cout << "Name of student = " << id << endl;
    }
};

class marks : public student
{
private:
    int Submarks[5];

public:
    void get_marks()
    {
        cout << "Enter marks of 5 subject = ";
        for (int i = 0; i < 5; i++)
        {
            cin >> Submarks[i];
        }
    }
    void display_marks()
    {
        cout << "Marks of 5 subject  = " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << Submarks[i] << endl;
        }
    }
};

int main()
{
    marks M;
    M.get_student();
    M.get_marks();
    M.display_student();
    M.display_marks();

    return 0;
}