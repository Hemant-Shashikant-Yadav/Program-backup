#include <stdio.h>

int main()
{
    int pros, reso;
    printf("Enter number of processes exist = ");
    scanf("%d", &pros);
    printf("Enter number of resources exist = ");
    scanf("%d", &reso);

    int max[pros][reso], allocated[pros][reso], need[pros][reso], sysytAvailable[reso], actualAvailable[reso], seq[pros];

    // setData(pros, reso, sysytAvailable, actualAvailable, max, allocated);
    printf("Enter maximum system resources available for %d resources = ", reso);
    for (int i = 0; i < reso; i++)
    {
        scanf("%d", &sysytAvailable[i]);
        /* code */
    }
    printf("Enter actual system resources available for %d resources = ", reso);
    for (int i = 0; i < reso; i++)
    {
        scanf("%d", &actualAvailable[i]);

        /* code */
    }

    for (int i = 0; i < pros; i++)
    {
        for (int j = 0; j < reso; j++)
        {
            printf("Enter maximum system resources can be allocated to the process [%d][%d]= ", i + 1, j + 1);
            scanf("%d", &max[i][j]);
        }
    }
    // for (int i = 0; i < pros; i++)
    // {
    //     for (int j = 0; j < reso; j++)
    //     {
    //         printf("%d", max[i][j]);
    //     }
    // }
    printf("\n\n");
    for (int i = 0; i < pros; i++)
    {
        for (int j = 0; j < reso; j++)
        {
            printf("Enter allocated system resources to the process [%d][%d]= ", i + 1, j + 1);
            scanf("%d", &allocated[i][j]);
        }
    }
    // for (int i = 0; i < pros; i++)
    // {
    //     for (int j = 0; j < reso; j++)
    //     {
    //         printf("%d", allocated[i][j]);
    //     }
    // }

    for (int i = 0; i < pros; i++)
    {
        for (int j = 0; j < reso; j++)
        {
            need[i][j] = max[i][j] - allocated[i][j];
        }
    }
    // for (int i = 0; i < pros; i++)
    // {
    //     for (int j = 0; j < reso; j++)
    //     {
    //         printf("%d", need[i][j]);
    //     }
    // }
    int fbool[pros], ans[pros], index = 0;
    for (int k = 0; k < pros; k++)
    {
        fbool[k] = 0;
    }

    int flag = 1;

    for (int k = 0; k < pros; k++)
    {
        for (int i = 0; i < pros; i++)
        {
            if (fbool[i] == 0)
            {
                int flag = 0;
                for (int j = 0; j < reso; j++)
                {
                    if (need[i][j] > sysytAvailable[j])
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                {
                    ans[index++] = i;
                    for (int y = 0; y < reso; y++)
                        sysytAvailable[y] += allocated[i][y];
                    fbool[i] = 1;
                }
            }
        }
    }

    for (int i = 0; i < pros; i++)
    {
        if (fbool[i] == 0)
        {
            flag = 0;
            printf("The following system is not safe");
            break;
        }
    }
    if (flag == 1)
    {
        printf("Sequence\n");
        for (int i = 0; i < pros ; i++)
        {

            printf(" %4d ", ans[i]);
        }
    }

    return 0;
}