#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter values of a,b,c:");
	scanf("%d %d %d",&a,&b,&c);
	int largest=(a>b)?((a>c)?printf("Largest:%d",a):printf("Largest:%d",b)):((b>c)?printf("Largest:%d",b):printf("Largest:%d",c));
	return 0;
}
