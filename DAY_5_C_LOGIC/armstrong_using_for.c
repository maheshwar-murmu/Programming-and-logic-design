#include <stdio.h>

int main() {
    int n, r, rev = 0, num, count = 0, temp,i;

    printf("Enter any number: ");
    scanf("%d", &n);

    num = n;
    temp = n;

    
    for (; temp != 0; temp /= 10) 
	{
        count++;
    }

    for (; n != 0; n /= 10) 
	{
        r = n % 10;

        int power = 1;
        for ( i = 0; i < count; i++)
		{
            power *= r; 
        }

        rev += power;
    }

    if (rev == num) 
	{
        printf("Armstrong number\n");
    } else 
	{
        printf("Not an Armstrong number\n");
    }

    return 0;
}

