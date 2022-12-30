#include <iostream>
using namespace std;

class base1
{
private:
	int a;

public:
	void messege();
};

void base1::messege()
{
	cout << "This messege is from base 1 " << endl;
}

class base2
{
private:
	int a;

public:
	void messege();
};

void base2::messege()
{
	cout << "This messege is from base 2 " << endl;
}

/*This shows ambiguity
class derrived : public base1, public base2
{
private:
	int c;

public:
};
*/

class derrived : public base1, public base2
{
private:
	int c;

public:
	void messege();
};

void derrived::messege()
{
	base1::messege();
}

int main()
{
	base1 b;
	b.messege();
	base2 c;
	c.messege();

	derrived f;
	f.messege();
	return 0;
}
