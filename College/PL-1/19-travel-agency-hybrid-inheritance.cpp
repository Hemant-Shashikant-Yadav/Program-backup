#include <iostream>
using namespace std;

class Agency
{
protected:
    int Id;
    char Name[50];

public:
    Agency();
};

Agency::Agency()
{
    cout << "Enter the name of travel agency = ";
    gets(Name);
    cout << "Enter the Id of travel agency = ";
    cin >> Id;
}

class Source
{
protected:
    char SName[50];
    char DName[50];
    int date;
    int month;
    int year;
    int price;

public:
    Source();
};

Source::Source()
{
    getchar();
    cout << "Enter the journy source name = ";
    gets(SName);
    cout << "Enter the journy destination name = ";
    gets(DName);
    cout << "Enter the journy date = \n";
    cout << "Day = ";
    cin >> date;
    cout << "Month = ";
    cin >> month;
    cout << "Year = ";
    cin >> year;
    cout << "Enter the journy price = ";
    cin >> price;
}

class passanger : public Agency, public Source
{
protected:
    char PName[50];
    int age;

public:
    passanger();
};

passanger::passanger()
{
    getchar();
    cout << "Enter the pasenger name = ";
    gets(PName);
    cout << "Enter the pasenger age = ";
    cin >> age;
}
class Display : public passanger
{
public:
    void display();
};

void Display::display()
{
    cout << "\n\nThe name of travel agency = " << Name << endl;
    cout << "The Id of travel agency = " << Id << endl;
    cout << "The journy source name = " << SName << endl;
    cout << "The journy destination name = " << DName << endl;
    cout << "The journy date = " << date << "/" << month << "/" << year << endl;
    cout << "The journy price = " << price << endl;
    cout << "The pasenger name = " << PName << endl;
    cout << "The pasenger age = " << age << endl;
}

int main()
{
    Display D;
    D.display();
    return 0;
}