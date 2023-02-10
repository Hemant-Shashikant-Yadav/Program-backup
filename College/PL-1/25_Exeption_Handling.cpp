#include <iostream>
using namespace std;

bool check_age(int age)
{
    try
    {
        if (age < 18)
        {
            cout << "Exeption throwed" << endl;
            throw age;
        }
        else
        {
            cout << "You can vote." << endl;
            return true;
        }
    }
    catch (int num)
    {
        cout << "Exeption Catched" << endl;
        cout << "Your age (" << num << ") is less than 18. you can't vote !!!";

        return false;
    }
}
int main()
{
    int age;
    char name[100];
    double contact_no;

    cout << "Enter the age = ";
    cin >> age;
    getchar();

    if (check_age(age))
    {
        cout << "Enter your name = ";
        gets(name);
        cout << "Enter your contact number = ";
        cin >> contact_no;

        cout << "Your registration is successful.";
    }

    return 0;
}