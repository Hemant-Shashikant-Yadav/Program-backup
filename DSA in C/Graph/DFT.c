#include <stdio.h>
#include "adjmatrix.h"

void dft(intv v)
{
    printf("%4d", v);

    visited[v] = 1;

    for (int i = 1; i <= n; i++)
    {
        if (adj[v][i] == 1 && visited[i] == 0)
        {
            dft(i);
            /* code */
        }

        /* code */
    }
}
int main()
{
    createMatrix
    return 0;
}