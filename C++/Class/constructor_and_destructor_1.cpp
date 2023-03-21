#include <iostream>
using namespace std;

class Number
{
private:
    int no, data;

public:
    Number();
    Number(int a);
    Number(Number &T);
    ~Number();

    void setData()
    {
        cout << "Enter data = ";
        cin >> no;
    }
    void setData(int n)
    {
        no = n;
    }

    void display()
    {
        cout << "Number = " << no << endl;
    }

    int getNo()
    {
        return no;
    }
};

Number::Number()
{
    no = 0;
    cout << "Default constructor is called." << endl;
}
Number::Number(int a)
{
    no = a;
    cout << "Parameterised constructor is called." << endl;
}
Number::Number(Number &T)
{
    no = T.no;
    cout << "Copy constructor is called." << endl;
}

Number::~Number()
{
    cout << "Destructor";
}

int main()
{
    Number P;
    P.display();

    cout << endl;

    P.setData();
    P.display();

    cout << endl;

    Number Q(10); // Implicite Call
    Q.display();

    cout << endl;
    // Number R = 10; // Explicite Call
    // R.display();

    Number S(Q);
    S.display();

    return 0;
}