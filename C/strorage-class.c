#include <stdio.h>
// 2. #include "storage-class-temp.c"

// (1 & 2) int sumfunc(int a, int b)
// {
//     // 1. Auto storage
//     // 1.  auto int sum = a + b;
//     //  extern int sum ;/*2.*/

//     return sum;
// }
// 2.int sum = 55;

// 3. int count()
// {
//     static int count =0;
//     count++;
//     return count;
// }

 int sumfunc(int a, int b)
{
   int sum = a + b;

    return sum;
}

int main()
{
    /*1 & 2*/
    // int sum = sumfunc(5,7);
    // printf("The sum = %d", sum);

    /*3.*/
    // printf("Thr count is = %d\n",count());
    // printf("Thr count is = %d\n",count());
    // printf("Thr count is = %d\n",count());
    // printf("Thr count is = %d\n",count());
    // printf("Thr count is = %d\n",count());

    /*4*/
    register int sum = sumfunc(5,7);
    printf("The sum = %d", sum);
    return 0;
}