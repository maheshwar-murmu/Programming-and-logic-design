#include <stdio.h>

int main() 
{
    int rows, cols,i,j;
    
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols], transpose[cols][rows];

    printf("Enter elements of the matrix:\n");
    for ( i = 0; i < rows; i++) 
	{
        for ( j = 0; j < cols; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }

    for ( i = 0; i < rows; i++) 
	{
        for ( j = 0; j < cols; j++) 
		{
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nTranspose of the Matrix:\n");
    for ( i = 0; i < cols; i++) 
	{
        for ( j = 0; j < rows; j++) 
		{
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

