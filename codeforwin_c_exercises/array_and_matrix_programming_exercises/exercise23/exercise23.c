/*
Write a C program to read elements in two matrices and add elements of both matrices. 
C program for addition of two matrix. 
Matrix addition program in C. 
Logic to add two matrix in C programming.
*/

#include<stdio.h>

int main(){

    int array1[3][3],array2[3][3];

    printf("Enter elements in matrix A of size 3x3:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&array1[i][j]);
        }
        
    }

    printf("Enter elements in matrix B of size 3x3:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&array2[i][j]);
        }
        
    }

    printf("Sum of matrices A+B =\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",(array1[i][j]+array2[i][j]));
        }
        printf("\n");
    }
    

    return 0;
}