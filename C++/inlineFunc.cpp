#include<iostream>
using namespace std;

inline int product(int a, int b);
int main()
{
    int a,b;

    cout<<"Enter two numbers = ";
    cin>>a>>b;

    cout<<"The product of num1 and num2 is = "<<product(a,b)<<endl;
    cout<<"The product of num1 and num2 is = "<<product(a,b)<<endl;
    cout<<"The product of num1 and num2 is = "<<product(a,b)<<endl;
    cout<<"The product of num1 and num2 is = "<<product(a,b)<<endl;
    cout<<"The product of num1 and num2 is = "<<product(a,b)<<endl;
    cout<<"The product of num1 and num2 is = "<<product(a,b)<<endl;
    cout<<"The product of num1 and num2 is = "<<product(a,b)<<endl;
    cout<<"The product of num1 and num2 is = "<<product(a,b)<<endl;

    return 0;
}
inline int product(int a, int b)
{
    return a*b; 
}