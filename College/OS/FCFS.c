#include <stdio.h>

void WaitingTime(int p[], int n, int bt[], int wt[])
{
    wt[0] = 0;

    for (int i = 1; i < n; i++)
    {
        wt[i] = bt[i - 1] + wt[i - 1];
    }
}

void TurnAroundTime(int p[], int n, int bt[], int wt[], int tat[])
{
    for (int i = 0; i < n; i++)
    {

        tat[i] = bt[i] + wt[i];
    }
}

void avgTime(int p[], int wt[], int tat[], int n, int bt[])
{
    int total_wt = 0, total_tat = 0;

    printf("\n   \tProcess\t\tBurst Time\tWaiting Time\tTurnaround Time\n");

    for (int i = 0; i < n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        printf("%15d %15d %15d %15d\n", i + 1, bt[i], wt[i], tat[i]);
    }
    float totWT = (float)total_wt / (float)n;
    float totTAT = (float)total_tat / (float)n;
    printf("Average waiting time = %f", totWT);
    printf("\n");
    printf("Average turn around time = %f ", totTAT);
}

int main()
{
    int processes[100], burst_time[100], wt[100], tat[100], n, i;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter the burst time =\n");

    for (i = 0; i < n; i++)
    {
        printf("Burst Time for process %d = ", i + 1);
        scanf("%d", &burst_time[i]);
    }
    WaitingTime(processes, n, burst_time, wt);

    TurnAroundTime(processes, n, burst_time, wt, tat);
    avgTime(processes, wt, tat, n, burst_time);
    return 0;
}