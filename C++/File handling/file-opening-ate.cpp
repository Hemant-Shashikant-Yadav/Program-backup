#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
 
using namespace std;

int main() 
{ 
    fstream fileptr;
    double  b;



    fileptr.open("new_file_append.txt", ios::in);
    // fileptr.seekg( -9, ios::end );       100.046 
    // fileptr.seekg( -18, ios::end );      100.099
    // fileptr.seekg(9);                    101.058
    fileptr >> b;
    cout << "\n"
         << b << endl;

    fileptr.close();


    return 0;
}