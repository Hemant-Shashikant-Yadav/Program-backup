#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    cout<<"Enter the quantity of numbers =";
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}
