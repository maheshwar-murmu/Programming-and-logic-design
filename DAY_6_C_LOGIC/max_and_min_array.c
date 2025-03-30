#include <stdio.h>

int main() {
    int n;
    int i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter %d elements: ", n);
    
    scanf("%d", &arr[0]); 
    int max = arr[0], min = arr[0];

    for( i = 1; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] > max) {
            max = arr[i];
        }

        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The maximum number is: %d\n", max);
    printf("The minimum number is: %d\n", min);
    
    return 0;
}

