#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int random_no_generator()
{
    srand(time(NULL));
    return (rand() % 3);
}

int main()
{
    int user_input, computer_input, use_score = 0, i = 3, computer_score = 0;

    printf("Welcome to rock paper sissor game.\nYou have 3 chances\nOne who scores maximum wins the game = ");
    while (i > 0)
    {
        printf("Enter your choice = (%d chances left)\n1.Rock \n2.Papaer \n3.Sissor\n Choices= ", i);
        scanf("%d", &user_input);

        computer_input = random_no_generator();

        if ((user_input == 0 && computer_input == 1) || (user_input == 1 && computer_input == 2) || (user_input == 2 && computer_input == 0))
        {
            printf("Computer win!!!");
            computer_score++;
        }
        else if (user_input == computer_input)
        {
            printf("Draw. 1 point to each.");
            use_score++;
            computer_score++;
        }
        else
        {
            printf("User win!!!");
            use_score++;
        }
        i--;
    }

    if (use_score > computer_score)
    {
        printf("\nUser is winner of game!!!");
        /* code */
    }
    else if (computer_score > use_score)
    {
        printf("\nComputer is winner of game!!!");
        /* code */
    }
    else
    {
        printf("\nDraw!!!");
    }

    return 0;
}