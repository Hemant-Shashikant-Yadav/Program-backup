
#include <stdio.h>

int main()
{

    void Palindrom();
    Palindrom();

    return 0;
}

void Palindrom()
{
    int no, dig, rev = 0, temp;
    printf("Enter no = ");
    scanf("%d", &no);

    temp = no;
    printf("Original no = %d\n", no);
    while (no > 0)
    {
        dig = no % 10;
        rev = (rev * 10) + dig;
        no /= 10;
    }

    printf("Reverse no = %d\n", rev);

    if (temp==rev)
    {
        printf("Palindrom");
    }
    else
    {
        printf("Not palindrom");
    }
    
    
}