#include<stdio.h>
int main()
{
	int factorial=1;
	int i;
	int number;
	printf("Enter a number:");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		factorial=factorial*i;
	}
	printf("Factorial of %d is %d",number,factorial);
	return 0;
}
