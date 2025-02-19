#include<stdio.h>
int main()
{
	int count=0;
	int remainder;
	int number;
	printf("Enter the number for digit finding:");
	scanf("%d",&number);
	int original_number=number;
	while(original_number>0)
	{
		remainder=original_number%10;
		count=count+1;
		original_number=original_number/10;
	}
	printf("%d has %d digits",number,count);
	return 0;
}
