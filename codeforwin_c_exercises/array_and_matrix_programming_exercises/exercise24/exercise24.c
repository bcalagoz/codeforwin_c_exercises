/*
Write a C program to read elements in two matrices and find the difference of two matrices. 
Program to subtract two matrices in C. 
Logic to subtract two matrices in C programming.
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

    printf("Difference of both matrices A-B =\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",(array1[i][j]-array2[i][j]));
        }
        printf("\n");
    }
    

    return 0;
}