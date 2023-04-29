#include <iostream>
#include <fstream>
#include "File_handling7_Result.h"
using namespace std;

int main()
{
    ifstream rin;

    rin.open("File_handling7.bat", ios::in | ios::binary);
    Result r;
    int no;

    while (1)
    {
        rin.read((char *)&r, sizeof(r));
        if (rin.eof())
        {
            break;
        }
        r.display();
        cout<<endl;
    }
    rin.close();
    return 0;
}