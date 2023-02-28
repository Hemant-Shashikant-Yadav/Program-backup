#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     cout << setw(5) << 1234 << " " << setw(5) << setiosflags(ios::left) << "Hemant" << resetiosflags(ios::left) << " " << setw(6) << setprecision(2) << 86.97 << endl;
     cout << setw(5) << 6 << " " << setw(5) << setiosflags(ios::left) << "ana" << resetiosflags(ios::left) << " " << setw(6) << setprecision(2) << 15.95 << endl;
     cout << setw(5) << 123 << " " << setw(5) << setiosflags(ios::left) << "Udaykumar" << resetiosflags(ios::left) << " " << setw(6) << setprecision(2) << 98.46 << endl;

     return 0;
}
