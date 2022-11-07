// Guessing random number
// counting the number of attempts

// 1. Guessing random number
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int num, guess, count = 0;
    srand(time(0));
    num = rand() % 100;
    // printf("The Random number is = %d ",num);

    printf("Enter a number betweebn 1 to 100 = ");
    do
    {
        scanf("%d", &guess);

        if (guess > num)
        {
            printf("You entered larger number \nPlease enter smaller number\n");
        }
        else if (num > guess)
        {
            printf("You entered smaller number \nPlease enter larger number\n");
        }
        else
        {
            printf("Yess!!\nThe correct number is =%d\nYou guessed number in %d attempts", num, count);
        }
        count++;
    } while (guess != num);

    return 0;
}