#include<iostream>
using namespace std;

int Fibo(int n)
{
    if (n==0||n==1)
    {
        return n;
    }
    else
    {
        return (Fibo(n-1)+Fibo(n-2));
    }
    
    
}

int main()
{
    int n,i=0,a;
    cout<<"Enter number of terms in febonacci series = ";
    cin>>n;

    cout<<"The fibonacci series is = ";
    while (i<n)
    {
        a=Fibo(i);
        cout<<a<<" ";
        i++;
    }
    
    return 0;
}