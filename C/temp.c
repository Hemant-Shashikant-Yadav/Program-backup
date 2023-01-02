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

    int computer_input = random_no_generator();
    printf("%d", computer_input);

    return 0;
}