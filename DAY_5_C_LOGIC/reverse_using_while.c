#include <stdio.h>

int main() 
{
    int n, r, rev = 0, original;

    printf("Enter any number: ");
    scanf("%d", &n);

    original = n;  

    while (n != 0) 
	{  
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }

    printf("The reverse of %d is: %d\n", original, rev);
    return 0;
}

