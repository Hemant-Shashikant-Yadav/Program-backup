// Program to add modity delete account object from binary file
#include <iostream>
#include <fstream>
using namespace std;

class Account
{
    int AccNo;
    char AccName[15];
    int AccBal;
    int AccState;

public:
    Account()
    {
        AccNo = 0;
        AccBal = 0;
        AccState = 0;
        AccName[0] = '\0';
    }
    ~Account() {}
    int getNo()
    {
        return AccNo;
    }
    int getState()
    {
        return AccState;
    }
    int getBalance()
    {
        return AccBal;
    }

    void display()
    {
        cout << "\nAccout no = " << AccNo << endl;
        cout << "Accout name = " << AccName << endl;
        cout << "Accout balance = " << AccBal << endl;
        cout << "Accout state = " << AccState << endl;
    }
    void deleteRecord()
    {
        AccState = 0;
    }
    void setData(int n)
    {
        AccNo = n;
        cout << "Accout name = ";
        cin >> AccName;
        cout << "Accout balance = ";
        cin >> AccBal;
        AccState = 1;
    }
};

class AcctAMD
{
    Account obj;
    fstream fa;

public:
    AcctAMD()
    {
        fa.open("File_handling9_Acc.dat", ios::in | ios::out | ios::binary);
        if (!fa)
        {
            ofstream tmp;
            tmp.open("File_handling9_Acc.dat", ios::out | ios::binary);
            tmp.close();

            fa.open("File_handling9_Acc.dat", ios::in | ios::out | ios::binary);
        }
    }
    ~AcctAMD()
    {
        fa.close();
    }
    int seaarch(int n)
    {
        int pos = 0;
        fa.seekg(0, ios::beg);

        while (1)
        {
            fa.read((char *)&obj, sizeof(Account));

            if (fa.eof())
            {
                fa.clear();
                pos = -1;
                break;
            }

            if (obj.getNo() == n)
            {
                break;
            }
            pos = fa.tellg();
        }
        return pos;
    }
    void add()
    {
        int no, pos;
        cout << "\nEnter accno = ";
        cin >> no;
        pos = seaarch(no);
        if (pos >= 0)
        {
            cout << "\nRecord exist." << endl;
            return;
        }

        obj.setData(no);
        fa.seekp(0, ios::end);
        fa.write((char *)&obj, sizeof(obj));
    }
    void modify()
    {
        int no, pos;
        cout << "\nEnter accno = ";
        cin >> no;
        pos = seaarch(no);
        if (pos == -1 || obj.getState() == 0)
        {
            cout << "\nRecor not exist.";
            return;
        }
        obj.setData(no);
        fa.seekp(pos, ios::beg);
        fa.write((char *)&obj, sizeof(obj));
    }
    void deleteFile()
    {
        int no, pos;
        cout << "\nEnter accno = ";
        cin >> no;
        pos = seaarch(no);
        if (pos == -1 || obj.getState() == 0)
        {
            cout << "\nRecor not exist.";
            return;
        }
        obj.deleteRecord();
        fa.seekp(pos, ios::beg);
        fa.write((char *)&obj, sizeof(obj));
    }
    void display()
    {
        fa.seekg(0, ios::beg);
        while (1)
        {
            fa.read((char *)&obj, sizeof(obj));
            if (fa.eof())
            {
                fa.clear();
                break;
                /* code */
            }
            obj.display();
        }
    }
    void menu()
    {
        int opt;
        while (1)
        {
            cout << "\nMenu = \n1.Add\n2.Mod\n3.Del\n4.Display\n5.Exit\nOption = ";
            cin >> opt;

            if (opt == 5)
            {
                break;
            }

            switch (opt)
            {
            case 1:
                add();
                break;
            case 2:
                modify();
                break;
            case 3:
                deleteFile();
                break;
            case 4:
                display();
                break;

            default:
                break;
            }
        }
    }
};

int main()
{
    AcctAMD P;
    P.menu();

    return 0;
}