#include <stdio.h>

void setData(int pros, int reso, int sysytAvailable[0][reso], int max[pros][reso], int allocated[pros][reso])
{
    int a;
    printf("Enter maximum system resources available for %d resources = ", reso);
    for (int i = 0; i < reso; i++)
    {
        scanf("%d", &a);
        sysytAvailable[0][i] = a;
        /* code */
    }
    printf("Enter maximum system resources available for %d resources = ", reso);
    for (int i = 0; i < reso; i++)
    {
        scanf("%d", &a);
        sysytAvailable[0][i] = a;
        /* code */
    }
}

int main()
{
    int pros, reso;
    printf("Enter number of processes exist = ");
    scanf("%d", &pros);
    printf("Enter number of resources exist = ");
    scanf("%d", &reso);

    int max[pros][reso], allocated[pros][reso], need[pros][reso], sysytAvailable[0][reso], actualAvailable[1][reso];

    setData(pros, reso, sysytAvailable, max, allocated);

    return 0;
}