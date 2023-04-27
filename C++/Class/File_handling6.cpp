#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream sin("Student.txt");
    int no;
    char name[15];
    double mark;
    while (1)
    {
        sin>>no>>name>>mark;
        if (sin.eof())
        {
            break;
        }
        
        cout << no << " " << name << " " << mark << "\n";
    }
    sin.close();

    return 0;
}