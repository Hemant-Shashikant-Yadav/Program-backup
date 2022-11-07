#include <iostream>
using namespace std;

int binarysearch( int array[],int n, int num)
{
    int s = 0, e = n;
    

    while (s <= e)
    {
        int midno = (s + e) / 2;
        if (array[midno] == num)
        {
            return midno;
        }
        else if (array[midno] > num)
        {
            e =midno -1;
        }
        else
        {
            s =midno + 1;
        }
    }
    return -1;
}

int main()
{
    int n;

    cout << "Enter the size of array =";
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int num;
    cout << "Enter the number you want to find in array =";
    cin >> num;

    cout << binarysearch(array,n,num)<<endl;
    return 0;
} 