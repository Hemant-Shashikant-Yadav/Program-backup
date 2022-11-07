#include <stdio.h>

struct Driver
{
    char name[100];
    int LisanceNo;
    char rute[50];
    int kms;
};

int main()
{

    struct Driver D[3];

    for (int i = 0; i < 3; i++)
    {

        printf("Enter the name of driver = ");
        scanf("\n");
        scanf("%[^\n]%*c", &D[i].name);

        printf("Enter the lisance no of driver = ");
        scanf("%d", &D[i].LisanceNo);

        printf("Enter the rute of driver = ");
        scanf("%s", &D[i].rute);
        
        printf("Enter the Kms of driver = ");
        scanf("%d", &D[i].kms);
        printf("\v");
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\vThe name of driver = %s\n", D[i].name);

        printf("The lisance no of driver = %d\n", D[i].LisanceNo);

        printf("The rute of driver = %s\n", D[i].rute);

        printf("The Kms of driver = %d\n", D[i].kms);
    }

    return 0;
}