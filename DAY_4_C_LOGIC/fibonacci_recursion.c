#include <stdio.h>

int printFibo(int a, int b, int n) {
    if (n <= 0) {
        return 0;
    }
    printf("%d ", a);
    return printFibo(b, a + b, n - 1);
}

int fibo(int n) {
    if (n <= 0) {
        return -1;
    }
    
    printFibo(0, 1, n);
    printf("\n");
    
    return 0;
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    if (fibo(n) == -1) {
        printf("Invalid input! Please enter a positive integer.\n");
    }
    
    return 0;
}

