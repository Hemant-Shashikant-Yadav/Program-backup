#include <iostream>
using namespace std;

class Matrix
{
    int x[3][3];

public:
    Matrix();
    Matrix(Matrix &);
    ~Matrix() {}

    void setData();
    void getData();
    void dislay();
    Matrix add(Matrix &);
    Matrix sub(Matrix &);
    Matrix mul(Matrix &);
};

Matrix::Matrix()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            x[i][j] == 0;
            /* code */
        }
    }
}

Matrix::Matrix(Matrix &m)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            x[i][j] = m.[i][j];
        }
    }
}

void Matrix::setData()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> x[i][j];
        }
    }
}

void Matrix::dislay()
{
    cout << "Matrix = " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << x[i][j];
        }
        cout << endl;
    }
}

int main()
{
    Matrix p, q, r, s;
    p.setData();
    q.setData();
    r = p.add(q);
    p.dislay();
    q.dislay();
    r.dislay();

    return 0;
}