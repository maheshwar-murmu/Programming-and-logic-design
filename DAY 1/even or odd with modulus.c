#include<stdio.h>
int main()
{
	int n;
	printf("enter number:");
	scanf("%d",&n);
	int number=(n/2)*2;
	if(number==n)
	{
		printf("Even number");
	}
	else
	{
		printf("Odd number");
	}
	return 0;
}
