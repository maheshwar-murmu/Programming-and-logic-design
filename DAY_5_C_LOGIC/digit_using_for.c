#include <stdio.h>

int main() 
{
    int n, count = 0;
    
    printf("Enter any number: ");
    scanf("%d", &n);

    if (n == 0) 
	{
        count = 1;
    } else {
        if (n < 0) 
		{
            n = -n; 
        }
        for (; n != 0; n /= 10) 
		{
            count++;
        }
    }

    printf("The number of digits are: %d\n", count);
    
    return 0;
}

