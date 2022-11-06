/*
Write a C program to read elements in two matrices and multiply them. 
Matrix multiplication program in C. 
How to multiply matrices in C. 
Logic to multiply two matrices in C programming.
*/

#include<stdio.h>

int main(){

    int array1[3][3],array2[3][3],array3[3][3];
    int sum ;
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

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum += (array1[i][k]*array2[k][j]);
            }
            array3[i][j] = sum;
        }
        
    }
    

    printf("Product of matrix A * B =\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",array3[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}