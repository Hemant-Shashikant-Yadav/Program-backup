#include<stdio.h> 
int main()
{
	int num, a;
	printf("Enter the number");
	scanf("%d",&num);

	int i;
	for (i=2;i<num;i++)
	{
	    if (num%i==0)
	    {
	        a=1;
	    }

	}
	
	if ( a==1)
	{
		printf("Non prime");
	}
	else
	{
		printf("Prime");
	}
	
	return 0;
}