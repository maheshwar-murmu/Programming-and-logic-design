#include<stdio.h>
int main()
{
	int t1=0;
	int t2=1;
	int next_term;
	int terms;
	printf("Enter the number of terms:");
	scanf("%d",&terms);
	int i;
	printf("Fibonacci series:\n");
	for(i=0;i<terms;i++)
	{
		printf("%d",t1);
		next_term=t1+t2;
		t1=t2;
		t2=next_term;
		printf(" ");
	}
	return 0;
}
