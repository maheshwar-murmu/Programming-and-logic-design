#include <stdio.h>

int main() 
{
    int n = 5;  
    int arr[5] = {2, 3, 4, 10, 40};
    int x = 10;
    int low = 0, high = n - 1, mid;
    int result = -1;

    while (low <= high) 
	{
        mid = low + (high - low) / 2;

        if (arr[mid] == x) 
		{
            result = mid;
            break;
        } 
        else if (arr[mid] < x) 
		{
            low = mid + 1;
        } 
        else 
		{
            high = mid - 1;
        }
    }

    if (result == -1)
    {
	
        printf("Element is not present in array\n");
    }
    else
    {
	
        printf("Element is present at index %d\n", result);
	}

    return 0;
}

