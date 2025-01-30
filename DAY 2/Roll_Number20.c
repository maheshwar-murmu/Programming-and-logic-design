#include<stdio.h>
int main()
{
	int roll_number;
	printf("Enter your roll number:");
	scanf("%d",&roll_number);
	if(roll_number==20)
	{
		printf("Roll Number 20 is present");
	}
	else
	{
		printf("Roll Number 20 is absent");
	}
	return 0;
}
