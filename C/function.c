/*
This is the example of function
we have to "derive" the fuction first for writitng the code after main function 
or we can write the fuction before the main function also but it will not look much "simple"
and if we didn't derrived the function brfore main function, it gives "warning".
*/

#include<stdio.h>

void display();

int main(int argc, char const *argv[])
{
    display();
    return 0;
}

void display()
{
    printf("Hello World");
}
