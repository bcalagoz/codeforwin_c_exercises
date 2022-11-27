/*
Write a C program to read elements in a matrix and find transpose of the given matrix. 
How to find transpose of a given matrix in C. 
Logic to find transpose of a matrix in C programming.
*/

#include<stdio.h>
#define SIZE_ROWS 3
#define SIZE_COLS 3

int main(){

    int arr[SIZE_ROWS][SIZE_COLS];
    int arrTrans[SIZE_ROWS][SIZE_COLS];
    int rows,cols;
    ;
    

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
            arrTrans[cols][rows] = arr[rows][cols];
        }
        
    }

    //print transposed array
    printf("Transpose of matrix:\n");
    for (rows = 0; rows < SIZE_ROWS; rows++)
    {
        for (cols = 0; cols < SIZE_COLS; cols++)
        {
            printf("%d", arrTrans[rows][cols]);
        }
        puts("");
    }

    return 0;

}