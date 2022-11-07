#include <stdio.h>

int main()
{

    int n, dig, sv, temp, res = 0;

    printf("Enter a number = ");
    scanf("%d", &n);

    for (sv=0;sv<10;sv++)
    {
        temp=n;
        while (temp>0)
        {
            dig=temp%10;
            if (dig==sv)
            {
                res=res*10+dig;
            }
            temp/=10;
            
        }
        
        printf("Output = %d",res);
    }
    

    return 0;
}