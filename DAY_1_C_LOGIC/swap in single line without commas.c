#include<stdio.h>
int main()
{
	int a,b;
	printf("enter value of a and b:");
	scanf("%d %d",&a,&b);
	a^=b^=a^=b;
	printf("value of a:%d and b:%d",a,b);
	return 0;
}
