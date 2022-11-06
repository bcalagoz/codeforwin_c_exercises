/*
Write a C program to read elements in a matrix and perform scalar multiplication of matrix. 
C program for scalar multiplication of matrix. 
How to perform scalar matrix multiplication in C programming. 
Logic to perform scalar matrix multiplication in C program.
*/

#include<stdio.h>

int main(){

    int array1[3][3],multiply;

    printf("Enter elements in matrix A of size 3x3:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&array1[i][j]);
        }
        
    }

    printf("Enter any number to multiply with matrix A:");
    scanf("%d",&multiply);


    printf("Resultant matrix c.A =\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",(array1[i][j] * multiply));
        }
        printf("\n");
    }

    return 0;
}