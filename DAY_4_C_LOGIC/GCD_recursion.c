#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a < 0) {
        a = -a;
    }

    if (b < 0) {
        b = -b;
    }

    int num = gcd(a, b);

    if (num > 0) {
        printf("GCD is: %d\n", num);
    } else {
        printf("GCD is 0 (Invalid input)\n");
    }

    return 0;
}

