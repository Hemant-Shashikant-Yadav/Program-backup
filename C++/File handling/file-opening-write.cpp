#include <iostream>
#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main()
{
    fstream fileptr;
    double a = 100.044445000045, b;
    fileptr.open("new_file_write.txt", ios::out);

    // fileptr << "the data is entered into the file1" << endl;
    fileptr << a << endl;
    fileptr.close();

    fileptr.open("new_file_write.txt", ios::in);
    fileptr >> b;
    b += 1.0143145000;
    cout << "\n"
         << b << endl;
    cout << fixed << setprecision(7) << b;

    fileptr.close();
   
    fileptr.open("new_file_write.txt", ios::out);

    fileptr << b<< fixed << setprecision(7) << endl;
    fileptr.close();
    return 0;
}