#include <iostream>
#include<string.h>
using namespace std;

void swap(char *p, char *q)
{
    char r[100];
    strcpy(r, p);
    strcpy(p, q);
    strcpy(q, r);
}

template <class T>
void swap(T &a, T &b)
{
    T c;
    c = a;
    a = b;
    b = c;
}

int main()
{
    char a = 'a';
    char b = 'b';
    swap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}