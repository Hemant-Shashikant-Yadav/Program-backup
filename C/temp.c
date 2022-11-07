#include <stdio.h>

int main()
{

    int i, dig, temp, cube, tot;

    for (i = 1; i < 1000; i++)
    {
       temp=0;
       tot=0;
        for(temp=i;temp>0;temp/=10)
        {
            dig = temp % 10;
            cube = dig * dig * dig;
            tot += cube;
            
        }

        if (tot==i)
        {
            printf("Armstron no = %d\n",i);
        }
    }

    return 0;
}