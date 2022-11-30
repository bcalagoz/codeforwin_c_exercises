/*
Write a C program to read elements in a matrix and check whether matrix is an Identity matrix or not. 
C program for finding Identity matrix. 
Logic to check identity matrix in C programming.
*/

#include<stdio.h>
#define SIZE_ROWS 3
#define SIZE_COLS 3

int main(){

    int arr[SIZE_ROWS][SIZE_COLS];
    int rows,cols;
    int isIdentity = 1;
    

    
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
            if (rows == cols && arr[rows][cols] != 1)
            {
                isIdentity = 0;
            }
            else if (rows != cols && arr[rows][cols] != 0)
            {
                isIdentity = 0;
            }
            
        }
        
    }
    
    if (isIdentity)
    {
        printf("It is an Identity matrix\n");
    }
    else
    {
        printf("It is NOT an Identity matrix\n");
    }
    



    return 0;
}