#include <stdio.h>

int main()
{

    void RevNo();
    RevNo();

    return 0;
}

void RevNo()
{
    int no,dig,rev=0;
    printf("Enter no = ");
    scanf("%d", &no);

    printf("Original no = %d\n",no);
    while (no>0)
    {
        dig=no%10;
        rev = (rev*10)+dig;
        no/=10;
    }
    
    printf("Reverse no = %d",rev);
}