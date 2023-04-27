#include <iostream>
#include <fstream.h>
using namespace std;

int main()
{
    ofstream out('abc.txt');

    char ch;
    cout << "Data = ";
    while (1)
    {
        cin >> ch;
        if (char == "*")
        {
            break;
            /* code */
        }
        out << ch;
    }
    out.close();
    

    return 0;
}