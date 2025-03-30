#include <stdio.h>

int main() 
{
    int rows, cols,i,j;
    
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr1[rows][cols], arr2[rows][cols], arr3[rows][cols];

    printf("Enter elements of 1st Matrix:\n");
    for( i = 0; i < rows; i++) 
	{
        for( j = 0; j < cols; j++) 
		{
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter elements of 2nd Matrix:\n");
    for( i = 0; i < rows; i++) 
	{
        for( j = 0; j < cols; j++) 
		{
            scanf("%d", &arr2[i][j]);
        }
    }

    for( i = 0; i < rows; i++) 
	{
        for( j = 0; j < cols; j++) 
		{
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("\nMatrix Sum:\n");
    for( i = 0; i < rows; i++) 
	{
        for( j = 0; j < cols; j++) 
		{
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}

