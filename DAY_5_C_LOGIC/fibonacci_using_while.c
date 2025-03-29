#include <stdio.h>

int main() 
{
    int a = 0, b = 1, n, fibo, i = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) 
	{
        printf("Please enter a positive integer.\n");
    } else 
	{
        printf("Fibonacci Series: ");
        while (i <= n) {
            printf("%d ", a);
            fibo = a + b;
            a = b;
            b = fibo;
            i++;
        }
        printf("\n");
    }

    return 0;
}

