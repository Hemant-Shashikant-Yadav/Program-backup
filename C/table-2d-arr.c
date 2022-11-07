#include<stdio.h>

int table(int arr[][10],int number,int num2);
int main ()
{
      
    int arr[2][10];
    int number,num2;

    scanf(" %d  %d",&number,&num2);
    table(arr,number,num2);   
    
    return 0; 
}

int table(int arr[][10],int number,int num2)
{
    for (int i = 0; i <2; i++)
    {   
        for (int j = 0; j < 10; j++)
        {   
            arr[i][j]= number * (j+1);

            printf("%d ",arr[i][j]);
        }
        printf("\n");
        number = num2;
    }
    
}