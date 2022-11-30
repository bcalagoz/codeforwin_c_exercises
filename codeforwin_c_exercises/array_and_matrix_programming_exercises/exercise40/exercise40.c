/*
Write a C program to read elements in a matrix and check whether the given matrix is symmetric matrix or not. 
How to check symmetric matrix in C. 
Logic to check symmetric matrix in C programming.
*/

#include<stdio.h>
#define SIZE_ROWS 3
#define SIZE_COLS 3

int main(){

    int arr[SIZE_ROWS][SIZE_COLS];
    int rows,cols;
    int isSymmetric = 1;
    

    
    printf("Enter elements in matrix of size 3x3:");
    for (rows = 0; rows < SIZE_ROWS; rows++)
    {
        for (cols = 0; cols < SIZE_COLS; cols++)
        {
            scanf("%d",&arr[rows][cols]);
        }
        
    }

    for (rows = 0; rows < SIZE_ROWS; rows++)
    {
        for (cols = 0; cols < SIZE_COLS; cols++)
        {
            if (arr[cols][rows] != arr[rows][cols])
            {
                isSymmetric = 0;
            }
            
        }
        
    }

    if (isSymmetric)
    {
        printf("The given matrix is Symmetric matrix");
    }
    else
    {
        printf("The given matrix is NOT Symmetric matrix");
    }
    
    
    return 0;
}