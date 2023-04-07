#include <iostream>
using namespace std;

class Matrix
{
private:
    /* data */
public:
    int A[3][3];
    Matrix(/* args */);
    Matrix(Matrix &);
    ~Matrix() {}
    friend istream &operator>>(istream &, Matrix &);

    friend ostream &operator<<(ostream &, Matrix &);
    Matrix operator+(Matrix &);
    Matrix operator-(Matrix &);
    Matrix operator*(Matrix &);
    Matrix operator-();
};

Matrix::Matrix(/* args */)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            /* code */
            A[i][j] = 0;
        }
    }
}
Matrix::Matrix(Matrix &t)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            /* code */
            A[i][j] = t.A[i][j];
        }
    }
}

istream &operator>>(istream &in, Matrix &m)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            /* code */
            in >> m.A[i][j];
        }
    }
    return in;
}
ostream &operator<<(ostream &out, Matrix &m)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            /* code */
            out << m.A[i][j] << " ";
        }
        out << endl;
    }
    return out;
}

Matrix Matrix::operator+(Matrix &t)
{
    Matrix b;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b.A[i][j] = this->A[i][j] + t.A[i][j];
        }
    }
    return b;
}
Matrix Matrix::operator-(Matrix &t)
{
    Matrix b;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b.A[i][j] = this->A[i][j] - t.A[i][j];
        }
    }
    return b;
}

// Matrix Matrix ::operator*(Matrix &t)
// {
//     Matrix b;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             for (int k = 0; k < 3; k++)
//             {
//                 b.A[i][j] = (this->A[i][k] * t.A.[k][i]);
//             }

//             /* code */
//         }
//     }
//     return b;
// }

Matrix Matrix ::operator-()
{
    Matrix b;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b.A[i][j] = A[j][i];
            /* code */
        }
    }
    return b;
}

int main()
{
    Matrix p, q, r;
    cout << "\nMatrix data = ";
    cin >> p;
    cout << "\nMatrix data = ";
    cin >> q;
    r = p + q;
    cout << p << endl
         << q << endl

         << r << endl;
    r = -p;
    cout << r;

    return 0;
}