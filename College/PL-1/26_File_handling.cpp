#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ifstream Read_file;
    ofstream Write_file;

    string str;
    Read_file.open("Read file.txt", ios::in);
    Write_file.open("Write file.txt", ios::out);

    while (getline(Read_file, str))
    {
        cout << str << endl;
        Write_file << str << endl;
    }

    Read_file.close();
    Write_file.close();

    return 0;
}
