#include<iostream>
#include<fstream>
#include"File_handling7_Result.h"
using namespace std;


int main()
{
    ofstream rout;

    rout.open("File_handling7.bat",ios::out|ios::binary);
    Result r;
    int no;

    while (1)
    {
        cout<<"\nRoll no = ";
        cin>>no;
        if (no==0)
        {
            break;
        }
        r.setData(no);
        rout.write((char*)&r,sizeof(r));
        
    }
    rout.close();
    return 0;
}