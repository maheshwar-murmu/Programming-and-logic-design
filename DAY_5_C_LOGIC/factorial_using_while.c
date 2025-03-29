#include <stdio.h>

int main() 
{
    int n, fact = 1, i = 1;

    printf("Enter any number: ");
    scanf("%d", &n);

    if (n < 0) 
	{
        printf("Factorial is not defined for negative numbers.\n");
    } else 
	{
        while (i <= n) 
		{
            fact *= i;
            i++;
        }
        printf("The factorial of %d is: %d\n", n, fact);
    }

    return 0;
}

