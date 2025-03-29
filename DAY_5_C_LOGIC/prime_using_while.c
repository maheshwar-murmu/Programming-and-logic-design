#include <stdio.h>

int main() 
{
    int n, i = 2;

    printf("Enter any number: ");
    scanf("%d", &n);

    if (n <= 1) 
	{  
        printf("Not a prime number\n");
        return 0;
    }

    while (i <= n / 2) 
	{
        if (n % i == 0) 
		{
            printf("Not a prime number\n");
            return 0;
        }
        i++;
    }

    printf("Prime number\n");
    return 0;
}

