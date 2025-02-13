#include<stdio.h>
int main()
{
	int number;
	printf("Enter Number:");
	scanf("%d",&number);
	if(number%2==0)
	{
		printf("Even number:%d",number);
	}
	else
	{
		printf("Odd number:%d",number);
	}
	return 0;
}
