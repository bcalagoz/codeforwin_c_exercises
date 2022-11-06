/*
Write a C program to read elements in a matrix and find the sum of minor diagonal (opposite diagonal) elements. 
C program to calculate sum of minor diagonal elements. 
Logic to find sum of opposite diagonal elements of a matrix in C programming.
*/

#include<stdio.h>
#define SIZE 3

int main(){

    int array[SIZE][SIZE];
    int sum = 0; 
    

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
        for (int j = SIZE-1; j >= 0; j--)
        {
            if ((i+j)==(SIZE-1) )
            {
                sum += array[i][j];
            }
        }
    }
    
    printf("Sum of minor elements = %d\n",sum);

    return 0;
}