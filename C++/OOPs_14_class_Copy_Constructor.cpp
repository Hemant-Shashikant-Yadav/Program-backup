#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number();
    number(int num);
    number( number &obj);
    void printNO (void);
};

number::number()
{
    a = 0;
}

number::number(int num)
{
    a = num;
}

number::number(number &obj)
{
    cout<<"\nCopy constructor called."<<endl;
    a = obj.a;
}

void number:: printNO (void)
{
    cout<<"The number of this object is = "<<a<<endl;
}

int main()
{
    number a(10),b,c;
    a.printNO();
    b.printNO();
    c.printNO();

    number c1 (a);
    c1.printNO();

    return 0;
}


/*When no copy construstor found Compiler supplies it's own copy constructor. */
/*we can copy value from one object to other without copy constructor.
But if there is any instructions at the time of copying value can not be given. */