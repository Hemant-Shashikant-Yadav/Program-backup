#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    // ofstream out1;
    // out1.open("file1.txt");
    // out1.close();

    /*
    1.Writing content into the file.
    */
    // ofstream out1("file1.txt");

    // out1 << "This is hy" << endl;

    // string name1 = "This is hemant yadav";
    // out1 << name1 << endl;

    // string name;
    // cout << "Enter your name = ";

    // cin >> name;
    // out1 << name << endl;
    // out1 << "My name is " + name;

    // out1.close();

    /*
    2.Reading the content from the file.
    */
    // ifstream in1("file1.txt");

    // string data;
    // in1 >> data;
    // cout << data << endl;

    // string data1;  
    // getline(in1, data1);
    // cout << data1 << endl;

    // in1.close();
 
    ifstream in1("file1.txt");
    string str;

    while (in1.eof() == 0)
    {
        /* code */
        getline(in1, str);
        cout << str << endl;
    }

    in1.close();
    return 0;
}