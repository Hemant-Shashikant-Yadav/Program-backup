// Regular code for Dot product of int.
// #include <iostream>
// using namespace std;

// class vector
// {
// private:
//     int size;
//     int *array;

// public:
//     vector(int n)
//     {
//         size = n;
//         array = new int[size];

//         for (int i = 0; i < n; i++)
//         {
//             scanf("%d", &array[i]);
//         }
//     }

//     int Dot_Product(vector &v)
//     {
//         int sum = 0;
//         for (int i = 0; i < size; i++)
//         {
//             sum += this->array[i] * v.array[i];
//         }
//         return sum;
//     }
// };

// int main()
// {
//     vector v1(3);
//     vector v2(3);

//     cout << "Dot product = " << v1.Dot_Product(v2);

//     return 0;
// }

// Dot product using tamplet.
#include <iostream>
using namespace std;

template <class T>
class vector
{
private:
    int size;
    T *array;

public:
    vector(int n)
    {
        size = n;
        array = new T[size];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
        }
    }

    T Dot_Product(vector &v)
    {
        T sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += this->array[i] * v.array[i];
        }
        return sum;
    }
};

int main()
{
    vector<float> v1(3);
    vector<float> v2(3);

    float a = v1.Dot_Product(v2);
    cout << "Dot product = " << a;

    return 0;
}