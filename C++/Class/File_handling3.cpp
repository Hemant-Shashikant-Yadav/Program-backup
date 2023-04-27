#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("num.txt");
    int no;
    cout << "Numbers = ";
    while (1)
    {
        in >> no;
        if (in.eof())
        {
            break;
        }
        cout << no << "\n";
        /* code */
    }
    in.close();

    return 0;
}