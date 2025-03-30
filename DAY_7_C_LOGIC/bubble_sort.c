#include <stdio.h>

int bubble(int a[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    return 0;
}

int main() {
    int a[6] = {5,10,15,20,4,7};
    int n = 6;
    int i;

    bubble(a, n);

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }

    return 0;
}

