#include<stdio.h>
int main()
{
	int reverse=0;
	int remainder;
	int number;
	printf("Enter a number:");
	scanf("%d",&number);
	int original_number=number;
	while(original_number>0)
	{
		remainder=original_number%10;
		reverse=reverse*10+remainder;
		original_number=original_number/10;
	}
	printf("%d is the reverse of %d",reverse,number);
	return 0;
}
