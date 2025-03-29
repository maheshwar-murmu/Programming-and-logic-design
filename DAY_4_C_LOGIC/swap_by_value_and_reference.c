#include <stdio.h>

int swap_value(int a, int b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\nAfter Swapping (Call by Value):\n");
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

int swap_reference(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
    printf("\nAfter Swapping (Call by Reference):\n");
    printf("a = %d, b = %d\n", *a, *b);
    return 0; 
}

int main() {
    int a, b;
    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);

    printf("\nBefore Swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    swap_value(a, b);
    printf("\nBack in main (After Call by Value, No Change):\n");
    printf("a = %d, b = %d\n", a, b);

    swap_reference(&a, &b);
    printf("\nBack in main (After Call by Reference, Changed):\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

