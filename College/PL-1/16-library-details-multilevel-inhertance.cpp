#include <iostream>
using namespace std;

class BookInfo
{
protected:
    int Id;
    char Name[50];
    char Auther[50];

public:
    void getdata1();
};
class PublisherInfo : public BookInfo
{
protected:
    char publication[50];
    int Publication_year;
    int price;

public:
    void getdata2();
};

class Display : public PublisherInfo
{
protected:
public:
    void Display1();
};

void BookInfo::getdata1()
{
    cout << "Name of book = ";
    gets(Name);
    cout << "Name of Auther = ";
    gets(Auther);
    cout << "Id of book = ";
    cin >> Id;
}
void PublisherInfo::getdata2()
{
    getchar();
    cout << "Name of publication = ";
    gets(publication);
    cout << "Year of publicarion = ";
    cin >> Publication_year;
    getchar();
    cout << "Price of book = ";
    cin >> price;
}
void Display::Display1()
{
    cout << "Name of book = " << Name << endl;
    cout << "Name of Auther = " << Auther << endl;
    cout << "Id of book = " << Id << endl;
    cout << "Name of publication = " << publication << endl;
    cout << "Year of publicarion = " << Publication_year << endl;
    cout << "Price of book = " << price << endl;
}

int main()
{
    Display d;
    d.getdata1();
    d.getdata2();
    d.Display1();
    return 0;
}