/*Scope and global variable example.
here when we have to call function first before using it.(Line 14)
*/
#include<stdio.h>

int fun();

int var=10;

int main(int argc, char const *argv[])
{
    int var=3;
    printf("%d\n",var); 
    fun();
    return 0;
}

int fun()
{
    printf("%d",var);
}
