#include <iostream>
#include <fstream>
using namespace std;

// 1.Checking presence of file
// int main()
// {
//     fstream fileptr;

//     fileptr.open("file_read_read.txt", ios::in);

//     if (!fileptr)
//     {
//         cout << "No file found";
//     }

//     return 0;
// }

// 2.Reading first letter of file
// int main()
// {
//     fstream new_file;
//     new_file.open("new_file_read.txt", ios::in);
//     if (!new_file)
//     {
//         cout << "No such file";
//     }
//     else
//     {
//         char ch;
//         new_file >> ch;
//         cout << ch;

//         new_file.close();

//         return 0;
//     }
// }

// 2.Reading whole file letter by letter. Here whole file is pringted on single output line.
// int main()
// {
//     fstream new_file;
//     new_file.open("new_file_read.txt", ios::in);
//     if (!new_file)
//     {
//         cout << "No such file";
//     }
//     else
//     {
//         char ch;
//         while (!new_file.eof())
//         {
//             new_file >> ch;
//             cout << ch;
//         }
//         new_file.close();

//         return 0;
//     }
//  }

// 3.Reading first line of file.
//
// int main()
// {
//     fstream new_file;
//     new_file.open("new_file_read.txt", ios::in);
//     if (!new_file)
//     {
//         cout << "No such file";
//     }
//     else
//     {
//         string str;

//         getline(new_file, str);
//         cout << str << endl;

//         new_file.close();

//         return 0;
//     }
// }


// 4.Reading whole file line by line. Here output is displayed as per shown in file (with spaces and new lines)
int main()
{
    fstream new_file;
    new_file.open("new_file_read.txt", ios::in);
    if (!new_file)
    {
        cout << "No such file";
    }
    else
    {
        string str;

        while (!new_file.eof())
        {
            getline(new_file, str);
            cout << str << endl;
        }
    }
    new_file.close();

    return 0;
}
