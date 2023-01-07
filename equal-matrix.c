#include <stdio.h>
 
#define size 2 // Matrix size declaration
 
int main()
{
    int A[size][size];
    int B[size][size];
 
    int row, col, isEqual;
 
    // Input elements in first matrix from user
    printf("Enter elements in matrix A of size %d x %d: \n", size, size);
    for(row=0; row<size; row++)
    {
        for(col=0; col<size; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
 
    // Input elements in second matrix from user
    printf("\nEnter elements in matrix B of size %d x %d: \n", size, size);
    for(row=0; row<size; row++)
    {
        for(col=0; col<size; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }
 
    // Assumes that the matrices are equal
    isEqual = 1;
 
    for(row=0; row<size; row++)
    {
        for(col=0; col<size; col++)
        {
 
            //If the corresponding entries of matrices are not equal
 
            if(A[row][col] != B[row][col])
            {
                isEqual = 0;
                break;
            }
        }
    }
 
    /*
     * Checks the value of isEqual
     * As per our assumption if isEqual contains 1 means both are equal
     * If it contains 0 means both are not equal
     */
    if(isEqual == 1)
    {
        printf("\nMatrix A is equal to Matrix B");
    }
    else
    {
        printf("\nMatrix A is not equal to Matrix B");
    }
 
    return 0;
}