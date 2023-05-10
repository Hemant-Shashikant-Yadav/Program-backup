#include <iostream>
using namespace std;

class Student
{
    int no;
    char nm[15];

public:
    Student()
    {
        no = 0;
        nm[0] = '\0';
    }

    friend istream &operator>>(istream &in, Student &s)
    {
        cout << "Roll no = ";
        in >> s.no;

        cout << "Name = ";
        in >> s.nm;
    }
    friend ostream &operator<<(ostream &out, Student &s)
    {
        out << "Roll no = " << s.no << endl;

        out << "Name = " << s.nm << endl;
    }
};

template <class T>
void input(T *a)
{
    cout << "Data = ";
    cin >> *a;
}
template <class T>
void disply(T *a)
{
    cout << "Data = " << *a;
}

int main()
{
    float p;
    input(&p);
    disply(&p);

    Student s;

    cin >> s;
    cout << s;

    return 0;
}