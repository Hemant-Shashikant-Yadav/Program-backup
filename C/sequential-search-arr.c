#include <stdio.h>

int main()
{

    int a[10], sv, i;

    printf("Array Data = ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Search Vlaue = ");
    scanf("%d", &sv);

    for ( i = 0; i < 10; i++)
    {
        if (a[i]==sv)
        {
           break;
        }
        
    }

    if (i==10)
    {
        printf("Not found");
    }
    else
    {
        printf("Fount a index position = %d",i);
    }
    
    

    return 0;
}