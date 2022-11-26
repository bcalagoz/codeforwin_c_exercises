/*
Write a C program to read elements in a matrix and find sum of lower triangular matrix. 
How to find sum of lower triangular matrix in C. 
Logic to find sum of lower triangular matrix in C programming.
*/

#include<stdio.h>
#define SIZE_ROWS 3
#define SIZE_COLS 3

int main(){

    int arr[SIZE_ROWS][SIZE_COLS];
    int rows,cols;
    int sum = 0;
    

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
            if (rows > cols)
            {
                sum = sum + arr[rows][cols];
            }
            
        }
        
    }
    
    printf("Sum of lower triangular matrix = %d\n",sum);

    return 0;

}