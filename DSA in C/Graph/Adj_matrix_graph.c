#include <stdio.h>

int main()
{

    int i, j, n, st, dest;

    static int adj[10][10];

    printf("\nEnter number of vertices = ");
    scanf("%d", &n);

    while (1)
    {
        printf("Source = ");
        scanf("%d", &st);

        printf("Destination = ");
        scanf("%d", &dest);

        if (st == 0 && dest == 0)
        {
            break;
            /* code */
        }
        adj[st][dest] = adj[dest][st] = 1;
    }
    printf("Adj matrix = ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d", adj[i][j]);
        }
        printf("\n");
    }

    return 0;
}