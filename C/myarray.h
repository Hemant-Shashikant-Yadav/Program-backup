void input(int *a, int n)
{
    int i = 0;
    printf("Enter data = ");

    while (i < n)
    {
        scanf("%d", (x + i));
        i++;
    }
}
void display(int *a, int n)
{
    int i = 0;
    printf("Data = ");

    while (i < n)
    {
        printf("%4d", (x + i));
        i++;
    }
}

int calctotal(int *a, int n)
{
    int i = 0, total = 0;

    while (i < n)
    {
        total += *(a + i);
        i++;
    }
    return total;
}

int findmaxpos(int *a, int n)
{
    int xpos = 0, i = 1;
    while (i < n)
    {
        if (a[i] > a[xpos])
        {
            xpos = i;
        }
        i++;
    }
    return xpos;
}
int findminpos(int *a, int n)
{
    int npos = 0, i = 1;
    while (i < n)
    {
        if (a[i] < a[xpos])
        {
            npos = i;
        }
        i++;
    }
    return npos;
}

int search(int *a, int sv, int n)
{
    int i = 0;
    while (i < n)
    {
        if (a[i] == sv)
        {
            break;
        }
        i++;
    }
    return (i == n) ? -1 : i;
    /*If '-1' then not found otherwise found */
}

int checkOrder(int *a, int n)
{
    int i = 1;
    while (i < n)
    {
        if (a[i] < a[i - 1])
        {
            break;
        }
        i++;
    }
    return (i == n) ? 1 : 0;
    /*If '0' then not ordered otherwise ordered */
}