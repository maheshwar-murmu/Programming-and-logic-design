#include <stdio.h>

int main() 
{
    int n, c = 0, i; 
    printf("Enter any number: ");
    scanf("%d", &n);

    if (n < 2) 
	{
        printf("Not a Prime Number");
    } else 
	{
        for (i = 2; i <= n / 2; i++) 
		{  
            if (n % i == 0) 
			{
                c = 1;
                break;
            }
        }
        if (c == 1) 
		{
            printf("Not a Prime Number");
        } else 
		{
            printf("Prime Number");
        }
    }
    
    return 0;
}

