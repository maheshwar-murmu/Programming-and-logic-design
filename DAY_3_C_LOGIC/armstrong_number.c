#include<stdio.h>
#include<math.h>
int main()
{
	int count=0;
	int remainder;
	int number;
	printf("Enter a number:");
	scanf("%d",&number);
	int original_number=number;
	while(original_number>0)
	{
		remainder=original_number%10;
		count=count+1;
		original_number=original_number/10;
	}
	int armstrong=0;
	int modulus;
	int og_number=number;
	while(og_number>0)
	{
		modulus=og_number%10;
		armstrong=armstrong+pow(modulus,count);
		og_number=og_number/10;
	}
	if(armstrong==number)
	{
		printf("%d is a armstrong number",armstrong);
	}
	else
	{
		printf("%d is not a armstrong number",armstrong);
	}
	return 0;
}
