#include <stdio.h>

struct complex_No {
    int real;
    int img;
};

int main() {
    struct complex_No num1, num2, result;

    printf("Enter the real and imaginary parts of the 1st complex number: ");
    scanf("%d %d", &num1.real, &num1.img);

    printf("Enter the real and imaginary parts of the 2nd complex number: ");
    scanf("%d %d", &num2.real, &num2.img);

    result.real = num1.real + num2.real;
    result.img = num1.img + num2.img;

    printf("The sum of the two complex numbers is: %d + %di\n", result.real, result.img);

    return 0;
}

