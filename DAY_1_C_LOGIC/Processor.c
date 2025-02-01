#include<stdio.h>
int main()
{
	double a;
	double *b;
	b=&a;
	printf("Size of Processor:%d bits",sizeof(b)*8);
	return 0;
}
