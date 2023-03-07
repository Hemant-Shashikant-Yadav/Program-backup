#include<iostream>
using namespace std;

void diaplay(double a)
{
    cout<<"Data = "<<a<<endl;
}
void diaplay(int a)
{
    cout<<"Data = "<<a<<endl;
}
void diaplay()
{
    cout<<"Welcome"<<endl;
}

int main()
{

    diaplay();
    diaplay('A');
    diaplay(8.7);
    
    return 0;
}