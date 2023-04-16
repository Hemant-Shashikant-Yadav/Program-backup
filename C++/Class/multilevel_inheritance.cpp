// program a class to implimented of multilevel inheritance
// use of protected menber
#include <iostream>
using namespace std;
class Number
{
protected:
	int no;

public:
	Number()
	{
		no = 0;
	}
	~Number()
	{
	}
	void setData()
	{
		cout << "\nEnter no = ";
		cin >> no;
	}
	void display()
	{
		cout << "\nNumber =  " << no;
	}
	int getnumber()
	{
		return no;
	}
};

class Name : public Number
{
protected:
	char name[15];

public:
	Name() : Number()
	{
		name[0] = '\0';
	}
	~Name()
	{
	}
	void setData()
	{
		cout << "\nEnter name = ";
		cin >> name;
	}
	void display()
	{
		cout << "\nName = " << name;
	}
	char *getName()
	{
		return name;
	}
};

class marks : public Name
{
protected:
	double Mark;

public:
	marks() : Name()
	{
		Mark = 0.0;
	}
	~marks()
	{
	}
	void setData()
	{
		Name::setData();
		cout << "\nEnter marks: ";
		cin >> Mark;
	}
	void display()
	{
		Name::display();
		cout << "\nMarks: " << Mark;
	}
};
int main()
{
	Number a;
	a.setData();
	a.display();

	// Number b;
	// b.setData();
	// b.display();

	marks c;
	c.setData();
	c.display();
}
