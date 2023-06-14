#include <stdio.h>

void WaitingTime(int n, int bt[], int wt[])
{
    int i, j, temp;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (bt[i] > bt[j])
            {
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;
            }
        }
    }
    wt[0] = 0;
    for (i = 1; i < n; i++)
    {
        wt[i] = bt[i - 1] + wt[i - 1];
    }
}

void TurnAroundTime(int n, int bt[], int wt[], int tat[])
{
    int i;

    for (i = 0; i < n; i++)
    {
        tat[i] = bt[i] + wt[i];
    }
}

void AvgTime(int n, int bt[], int wt[],int tat[])
{
    int total_wt = 0, total_tat = 0;

    printf("\n   \tProcess\t\tBurst Time\tWaiting Time\tTurnaround Time\n");
    int i;
    for (i = 0; i < n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        printf("%15d %15d %15d %15d\n", i + 1, bt[i], wt[i], tat[i]);
    }
    float totaWT = (float)total_wt / n, totalTAT = (float)total_tat / n;
    printf("\nAverage Waiting Time: %.2f", totaWT);
    printf("\nAverage Turnaround Time: %.2f", totalTAT);
}

int main()
{
    int n, i;
    int bt[100], wt[100], tat[100];

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter the burst time =\n");

    for (i = 0; i < n; i++)
    {
        printf("Burst Time for process %d = ", i + 1);
        scanf("%d", &bt[i]);
    }

    WaitingTime(n, bt, wt);
    TurnAroundTime(n, bt, wt, tat);
    AvgTime(n, bt,wt,tat);

    return 0;
}
