#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("num.txt");
    int no;
    cout << "Enter numbers = ";
    while (1)
    {
        cout << "No = ";
        cin >> no;
        if (no == 0)
        {
            break;
        }
        out << no << "\n";
        /* code */
    }
    out.close();

    return 0;
}