// Use pointer as a member of class
#include <iostream>
using namespace std;

class Dynamic_object
{
private:
    int noe;
    int *ptr;

public:
    Dynamic_object()
    {
        noe = 5;
        ptr = new int[noe];
    }
    Dynamic_object(int n)
    {
        noe = n;
        ptr = new int[noe];
    }
    Dynamic_object(Dynamic_object &D)
    {
        this->noe = D.noe;
        ptr = new int[noe];
        for (int i = 0; i < noe; i++)
        {
            ptr[i] = D.ptr[i];
        }
    }

    ~Dynamic_object()
    {
        delete[] ptr;
    }

    void setData()
    {
        cout << "Enter data = ";
        int i = 0;
        while (i < noe)
        {
            cin >> ptr[i];
            i++;
            /* code */
        }
    }
    void display()
    {
        int i = 0;
        cout << "Data = ";
        while (i < noe)
        {
            cout << " " << ptr[i];
            i++;
        }
    }
    int total()
    {
        int tot = ptr[0], i = 1;
        while (i < noe)
        {
            tot += ptr[i];
            i++;
            /* code */
        }
        return tot;
    }
    int avg()
    {
        return total() / noe;
    }
};

int main()
{
    Dynamic_object D;

    D.setData();
    D.display();
    cout<<"\nTotal = "<<D.total()<<endl;
    cout<<"Average = "<<D.avg()<<endl;

    Dynamic_object D2(7);

    D2.setData();
    D2.display();
    cout<<"\nTotal = "<<D2.total()<<endl;
    cout<<"Average = "<<D2.avg()<<endl;
    return 0;
}
