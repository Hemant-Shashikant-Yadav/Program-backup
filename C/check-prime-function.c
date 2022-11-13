#include <stdio.h>

int main()
{

    void Prime();
    Prime();

    return 0;
}

void Prime()
{
    int no,i;
    printf("Enter no = ");
    scanf("%d", &no);

    for (i = 2; i < no; i++)
    {
        if (no%i==0)
        {
            break;
        }
        
    }
    
    if (i==no)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }
    
    
}