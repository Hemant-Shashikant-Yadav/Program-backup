#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream odd("odd.txt");
    ofstream even("even.txt");
    ifstream in("num.txt");
    int no;
    while (1)
    {
        in >> no;
        if (in.eof())
        {
            break;
        }
        if (no%2==0)
        {
            even<<no<<"\n";
        }
        else
        {
            odd<<no<<"\n";
        }
        
    }
    in.close();
    odd.close();
    even.close();

    return 0;
}