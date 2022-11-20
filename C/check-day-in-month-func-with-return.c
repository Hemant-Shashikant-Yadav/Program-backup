#include <stdio.h>

int main()
{

    int DayInMonth();
    int res = DayInMonth();

    if (res == -1)
    {
        printf("Invlid month");
    }
    else
    {
        printf("Days = %d", res);
    }

    return 0;
}
int DayInMonth()
{
    int mno, days;

    printf("Enter month no = ");
    scanf("%d", &mno);

    if (mno < 1 || mno > 12)
    {
        days = -1;
    }
    else
    {
        switch (mno)
        {
        case 2:
            days = 28;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;

        default:
            days = 31;
            break;
        }
    }
}