/*
Write a C program to enter elements in two matrices and check whether both matrices are equal or not. 
C program to check whether elements of two matrices are equal or not. 
Logic to check if two matrices are equal or not in C programming.
*/

#include<stdio.h>

int main(){

    int array1[3][3],array2[3][3];
    int flag;

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

    flag = 1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (array1[i][j] != array2[i][j])
            {
                flag = 0;
                break;
            }
            
        }
    }
    
    if (flag == 1)
    {
        printf("Matrix A is equal to Matrix B");
    }
    else
    {
        printf("Matrix A is NOT equal to Matrix B");
    }
    
    return 0;
}