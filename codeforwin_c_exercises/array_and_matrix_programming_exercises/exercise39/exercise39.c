/*
Write a C program to read elements in a matrix and check whether matrix is Sparse matrix or not. 
C program for determining sparse matrix. 
How to check sparse matrix in C. 
Logic to check sparse matrix in C programming.
*/

#include<stdio.h>
#define SIZE_ROWS 3
#define SIZE_COLS 3

int main(){

    int arr[SIZE_ROWS][SIZE_COLS];
    int rows,cols;
    int zeroCount = 0;
    

    
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
            if (arr[rows][cols] == 0)
            {
                zeroCount++;
            }
            
        }
        
    }

    if (zeroCount >= (SIZE_ROWS * SIZE_COLS)/2)
    {
        printf("The given matrix is a Sparse matrix.\n");
    }
    else
    {
        printf("The given matrix is NOT a Sparse matrix.\n");
    }
    
    return 0;    
}