/*
Write a C program to read elements in a matrix and find the sum of elements of each row and columns of matrix. 
C program to calculate sum of rows and columns of matrix. 
Logic to find sum of each row and columns of a matrix in C programming.
*/
#include<stdio.h>
#define SIZE 3

int main(){

    int array[SIZE][SIZE];
    int sum; 
    

    printf("Enter elements in matrix of size 3x3:");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            scanf("%d",&array[i][j]);
        }
        
    }

    for (int i = 0; i < SIZE; i++)
    {
        sum = 0;
        for (int j = 0; j < SIZE; j++)
        {
            sum += array[i][j];
        }
        printf("Sum of elements of Row %d = %d\n",i+1,sum);
    }

    for (int i = 0; i < SIZE; i++)
    {
        sum = 0;
        for (int j = 0; j < SIZE; j++)
        {
            sum += array[j][i];
        }
        printf("Sum of elements of Column %d = %d\n",i+1,sum);
    }

    return 0;
}