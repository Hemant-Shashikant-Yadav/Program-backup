#include <stdio.h>

int main()
{

    void CountNo();
    CountNo();

    return 0;
}

void CountNo()
{
    int no,i,count=0;
    printf("Enter no = ");
    scanf("%d", &no);

    while (no>0)
    {
        count++;
        no/=10;
    }
    printf("Count = %d",count);
    
    
}