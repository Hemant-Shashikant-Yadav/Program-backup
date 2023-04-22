#include <iostream>
using namespace std;

class Sem1
{
protected:
    int t1, t2, o1, o2;

public:
    Sem1()
    {
        t1 = t2 = o1 = o2 = 0;
    }
    ~Sem1() {}

    void setSem1()
    {
        cout << "Enter thory marks = ";
        cin >> t1 >> t2;

        cout << "Enter oral marks = ";
        cin >> o1 >> o2;
    }
    void displaySem1()
    {
        cout << "\nTheory marks = " << t1 << " " << t2;
        cout << "\nOral marks = " << o1 << " " << o2;
    }

    int getTheorySem1()
    {
        return t1 + t2;
    }
    int getOralSem1()
    {
        return o1 + o2;
    }
};
class Sem2
{
protected:
    int t1, t2, t3, o1, o2;

public:
    Sem2()
    {
        t1 = t2 = t3 = o1 = o2 = 0;
    }
    ~Sem2() {}

    void setSem2()
    {
        cout << "Enter thory marks = ";
        cin >> t1 >> t2 >> t3;

        cout << "Enter oral marks = ";
        cin >> o1 >> o2;
    }
    void displaySem2()
    {
        cout << "\nTheory marks = " << t1 << " " << t2 << " " << t3;
        cout << "\nOral marks = " << o1 << " " << o2;
    }

    int getTheorySem2()
    {
        return t1 + t2 + t3;
    }
    int getOralSem2()
    {
        return o1 + o2;
    }
};

class Result : public Sem1,
               public Sem2
{
protected:
    int no, thTotal, orTotal;

public:
    Result() : Sem1(), Sem2()
    {
        no = 0;
        thTotal = orTotal = 0;
    }
    ~Result() {}

    void setData()
    {
        cout << "Enter roll no = ";
        cin >> no;

        setSem1();
        setSem2();
        thTotal = getTheorySem1() + getTheorySem2();
        orTotal = getOralSem1() + getOralSem2();
    }

    int getThTotal()
    {
        return thTotal;
    }
    int getOrTotal()
    {
        return orTotal;
    }
    void display()
    {
        cout << "\nRoll no = " << no << endl;
        cout << "Theory marks = " << thTotal << endl;
        cout << "Oral marks = " << orTotal << endl;
    }
};

int main()
{
    Result R;
    R.setData();
    R.display();

    return 0;
}