#include<stdio.h>

int main(int argc, char const *argv[])
{
    int qty, rate, total1,total2;    

    printf("Enter the quantity of product you perchased-");
    scanf("%d",&qty);

    printf("Enter the rate of product you perchased-");
    scanf("%d",&rate);

    if (qty >=1000)
    {
        printf("You got the discount of 10% \n");
        total1=(qty*rate)-(qty*rate*0.1);
        printf("Your total is-%d ",total1);
    }
    else
    {
        total2=qty*rate;
        printf("You didnt get discount your total is-%d",total2);
    }
    

    return 0;
}
