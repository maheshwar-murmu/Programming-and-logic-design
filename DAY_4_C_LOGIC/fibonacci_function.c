#include <stdio.h>

int fibo(int n) {
    if (n <= 0) {
        return -1;
    }
    
    int a = 0, b = 1, s, i;
    
    printf("%d", a);
    
    for (i = 1; i < n; i++) {
        printf(" %d", b);
        s = a + b;
        a = b;
        b = s;
    }
    
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


