/*
Write a C program to read elements in a matrix and find determinant of the given matrix. 
C program to find determinant of a 2x2 matrix and 3x3 matrix. 
Logic to find determinant of a matrix in C programming.
*/

#include<stdio.h>
#define SIZE_ROWS 2
#define SIZE_COLS 2

int main(){

    int arr[SIZE_ROWS][SIZE_COLS];
    int rows,cols;
    int det = 0;

    
    printf("Enter elements in matrix of size 2x2:");
    for (rows = 0; rows < SIZE_ROWS; rows++)
    {
        for (cols = 0; cols < SIZE_COLS; cols++)
        {
            scanf("%d",&arr[rows][cols]);
        }
        
    }

    det = (arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]);

    printf("Determinant of matrix = %d\n",det);


    return 0;

}