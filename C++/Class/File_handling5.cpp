#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream sout("Student.txt");
    int no;
    char name[15];
    double mark;
    while (1)
    {
        cout << "Enter roll no = ";
        cin >> no;
        if (no == 0)
        {
            break;
        }
        cout << "Enter name = ";
        cin >> name;
        cout << "Enter marks = ";
        cin >> mark;

        sout << no << " " << name << " " << mark << "\n";
    }
    sout.close();

    return 0;
}