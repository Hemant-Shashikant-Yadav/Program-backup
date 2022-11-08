
#include <stdio.h>
int count = 0;
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n >0)
    {
       
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
    count++;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
    }
}

int main()
{
    int n = 3; 
    towerOfHanoi(n, 'A', 'C', 'B');
    printf("\nNumber of moves = %d",count);
    return 0;
}