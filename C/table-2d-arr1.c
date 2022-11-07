#include<stdio.h>

int table(int arr[][10],int n,int num);
int main ()
{
    int arr[2][10];
    int num,num1;

    printf("Enter the two numbers you want table of = ");
    scanf("%d",&num);
    scanf("%d",&num1);

    table(arr,0,num);
    table(arr,1,num1);

    for (int i = 0; i < 11; i++)
    {
        printf("%d \t",arr[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 11; i++)
    {
        printf("%d \t",arr[1][i]);
    }
    

    return 0; 
}

int table(int arr[][10], int n, int num)
{
    for (int i = 0; i < 10; i++)
    {
        arr[n][i]=num*(i+1);
    }
    
}