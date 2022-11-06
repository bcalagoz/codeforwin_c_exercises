/*
Write a C program to read elements in a matrix and find the sum of main diagonal (major diagonal) elements of matrix. 
Find sum of all elements of main diagonal of a matrix. 
Logic to find sum of main diagonal elements of a matrix in C programming.
*/
#include<stdio.h>

int main(){

    int array[3][3];
    int sum = 0; 
    

    printf("Enter elements in matrix of size 3x3:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&array[i][j]);
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum += array[i][j];
            }
        }
    }
    
    printf("Sum of main diagonal elements = %d\n",sum);

    return 0;
}