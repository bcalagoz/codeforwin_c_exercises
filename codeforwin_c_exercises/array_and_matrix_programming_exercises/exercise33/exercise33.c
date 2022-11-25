/*
Write a C program to read elements in a matrix and check whether the matrix is a lower triangular matrix or not. 
C program to find whether the matrix is lower triangular or not. 
Logic to find lower triangular matrix in C programming.
*/

#include<stdio.h>
#include<stdbool.h>
#define SIZE_ROWS 3
#define SIZE_COLS 3

int main(){

    int arr[SIZE_ROWS][SIZE_COLS];
    int rows,cols;
    bool flag = false ;
    

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
            if (arr[rows][cols] == 0 && cols > rows)
            {
                flag = true;
            }
            
        }
        
    }
    
    if (flag)
    {
        printf("Matrix is lower triangular\n");
    }
    else
    {
        printf("Matrix is NOT lower triangular\n");
    }
    
    return 0;

}