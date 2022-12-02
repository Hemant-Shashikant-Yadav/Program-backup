#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void set_no();
    void get_no();
};
void Student::set_no()
{
    cout<<"Enter roll no = ";
    cin>>roll;
}
void Student::get_no()
{
    cout<<"Roll no = "<< roll<<endl;
}


class Test : virtual public Student
{
protected:
    float marks[3];

public:
    void set_marks();
    void get_marks();
};
void Test::set_marks()
{
    cout<<"Enter marks of 3 subject = ";
    for (int i = 0; i < 3; i++)
    {
        cin>>marks[i];
    }
    
}
void Test::get_marks()
{
    cout<<"Marks of 3 subject = "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<marks[i]<<endl;
    }
}
class sport : public virtual Student
{
protected:
    float score[3];

public:
    void Set_score();
    void get_score();
};
void sport::Set_score()
{
    cout<<"Enter score of 3 sports = ";
    for (int i = 0; i < 3; i++)
    {
        cin>>score[i];
    }
    
}
void sport::get_score()
{
    cout<<"Score of 3 sports = "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<score[i]<<endl;
    }
}

class result : public Test, public sport
{
private:
    int total_marks=0;
    int total_score=0;

public:
    void display_Result();
};
void result::display_Result()
{
    get_no();
    get_marks();
    get_score();
    for (int i = 0; i < 3; i++)
    {
        total_marks += marks[i];
        total_score += score[i];
    }
    cout<<"Total marks are = "<<total_marks<<endl;
    cout<<"Total score is = "<<total_score<<endl;
}

int main()
{
    result R1;
    R1.set_no();
    R1.set_marks();
    R1.Set_score();
    R1.display_Result();
    return 0;
}