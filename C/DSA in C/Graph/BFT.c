#include <stdio.h>
#include "adjmatrix.h"

int main()
{
    int q[10];
    int f = 1, r = 0;

    visited[r] = 1;
    printf("%4d", v);

    q[++r] = v;

    while (f <= r)
    {
        v = q[f++];

        for (int i = 1; i <= n; i++)
        {
            if (adj[v][i] == 1 && visited[i] == 0)
            {
                q[++r]=i;
                visited[i]=1;
                printf("%4d",i);
                /* code */
            }

            /* code */
        }

        /* code */
    }

    return 0;
}