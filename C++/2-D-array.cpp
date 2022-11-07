
//3X3 Matrix

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int matrix_array [3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>> matrix_array[i][j];

        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<< matrix_array[i][j] <<" ";

        }
        cout<<endl;
        
    }
    
    return 0;
}
