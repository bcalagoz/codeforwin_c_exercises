/*
Write a C program to input elements in array and count negative elements in array. 
C program to find all negative elements in array. 
How to count negative elements in array using loop in C programming. 
Logic to count total negative elements in an array in C program.
*/
#include<stdio.h>
#define MAX_SIZE 1000

int main(){

    int array[MAX_SIZE],size;
    int countNegative = 0;
    
    
    printf("Enter size of array: ");
    scanf("%d",&size);

    printf("Enter %d elements in the array :",size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    
    
    for (int i = 0; i < size; i++)
    {
        if (array[i] < 0)
        {
            countNegative++;
        }
    }
    
    printf("Total negative elements in array =  %d\n",countNegative);

    return 0;
}