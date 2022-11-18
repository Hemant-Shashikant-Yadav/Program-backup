#include <stdio.h>

int main()
{
int res;
    int RevNo();
    res= RevNo();

    printf("Reverse no = %d",res);
    return 0;
}

int RevNo()
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
    return rev;
    
}