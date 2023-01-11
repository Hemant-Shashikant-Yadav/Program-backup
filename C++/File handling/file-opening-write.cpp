#include <iostream>
#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main()
{
    fstream fileptr;
    float a = 100.055, b;
    fileptr.open("new_file_write.txt", ios::out);

    // fileptr << "the data is entered into the file1" << endl;
    fileptr << a << endl;
    fileptr.close();

    fileptr.open("new_file_write.txt", ios::in);
    fileptr >> b;
    b += 1.0145;
    cout << "\n"
         << b << endl;
    cout << fixed << setprecision(5) << b;

    fileptr.close();
    return 0;
}