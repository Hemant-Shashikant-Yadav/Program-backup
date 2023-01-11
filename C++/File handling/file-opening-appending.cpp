#include <iostream>
#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main()
{
    fstream fileptr; 
    double a = 100.0455, b;
    fileptr.open("new_file_append.txt", ios::app);

    // fileptr << "the data is entered into the file1" << endl;
    fileptr << a << endl;
    fileptr.close();

    fileptr.open("new_file_append.txt", ios::in);
    fileptr >> b;
    // b += 1.0143145000;
    cout << "\n"
         << b << endl;
    cout << fixed << setprecision(7) << b;

    fileptr.close();
   
    // fileptr.open("new_file_append.txt", ios::app);

    // fileptr << b<< fixed << setprecision(7) << endl;
    // fileptr.close();
    return 0;
}