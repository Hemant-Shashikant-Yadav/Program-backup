// program a single inheritance with private derivation
#include <iostream>
using namespace std;
class Number
{
	int no;

public:
	Number()
	{
		no = 0;
	}
	Number(int a)
	{
		no = a;
	}
	~Number()
	{
	}
	int getno()
	{
		return no;
	}
	void setdata()
	{
		cout << "\nno: ";
		cin >> no;
	}
	void display()
	{
		cout << "\nno: " << no;
	}
};

class Marks : Number
{
	double Mrk;

public:
	Marks() : Number()
	{
		Mrk = 0.0;
	}
	Marks(int a, double b) : Number(a)
	{
		Mrk = b;
	}
	~Marks()
	{
	}
	void setData()
	{
		Number::setdata();
		cout << "\nmrk: ";
		cin >> Mrk;
	}
	void disPlay()
	{
		Number::display();
		cout << "\nmraks: " << Mrk;
	}
	double getMarks()
	{
		return Mrk;
	}
};
int main()
{
	Marks p;
	//	p.setData();
	//	p.disPlay();
	p.setdata();
	p.display();
}
