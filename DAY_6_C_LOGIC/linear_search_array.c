#include <stdio.h>

int main() 
{
    int arr[100], n,i;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    printf("Enter elements in array: ");
    for ( i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    
    int num = 21;

    
    for ( i = 0; i < n; i++) 
	{
        if (arr[i] == num) 
		{
            printf("Element found at index %d\n", i);
            return 0; 
        }
    }

    printf("Element not found\n"); 

    return 0;
}

