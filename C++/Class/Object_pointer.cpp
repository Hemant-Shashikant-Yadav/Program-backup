#include <iostream>
using namespace std;

class Book
{
private:
    int Bno;
    char Bnm[15];
    int bprice;

    << endlpublic : Book();
    ~Book();
    void setData()
    {
        cout << "Enter Book name = ";
        cin >> Bnm;
        cout << "Enter Book number = ";
        cin >> Bno;
        cout << "Enter Book price = ";
        cin >> bprice;
    }

    void display()
    {
        cout << "Book name = " << Bnm << endl;
        cout << "Book number = " << Bno << endl;
        cout << "Book price = " << bprice << endl;
    }
};

Book::Book()
{
    Bno = 0;
    Bnm[0] = '\0';
    bprice = 0;
}

Book::~Book()
{
}

int main()
{
    Book *p;
    Book obj;

    p = &obj;

    p->setData();
    p->display();

    return 0;
}