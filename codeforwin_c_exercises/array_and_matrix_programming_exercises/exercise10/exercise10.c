/*
Write a C program to delete element from array at specified position. 
How to remove element from array at given position in C programming. 
Logic to remove element from any given position in array in C program. 
The program should also print an error message if the delete position is invalid.
*/

#include<stdio.h>
#define MAX_SIZE 1000

int main(){

    int array[MAX_SIZE];
    int size,position;
    
    printf("Enter size of array: ");
    scanf("%d",&size);

    printf("Enter %d elements in the array :",size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter the element position to delete :");
    scanf("%d",&position);

    if (position < 0 || position > size)
    {
        printf("INVALID POSITION!");
    }
    else
    {
        for (int i = position-1; i < size-1; i++)
        {
            array[i] = array[i+1];
        }
    
        size--;
    }
    

    printf("Elements of array after delete are :");

    for (int i = 0; i < size; i++)
    {
        printf(" %d,",array[i]);
    }
    
    return 0;
}