/*
Write a C program to input elements in array and copy all elements of first array into second array. 
How to copy array elements to another array in C programming. 
Logic to copy array elements in C program using loop.
*/

#include<stdio.h>
#define MAX_SIZE 1000

int main(){

    int array[MAX_SIZE],array2[MAX_SIZE];
    int size;
    
    printf("Enter size of array: ");
    scanf("%d",&size);

    printf("Enter %d elements in the array :",size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }

    for (int i = 0; i < size; i++)
    {
        array2[i] = array[i];
    }
    
    
    printf("Elements of source array are :");

    for (int i = 0; i < size; i++)
    {
        printf(" %d,",array[i]);
    }

    printf("\nElements of dest array are : ");

    for (int i = 0; i < size; i++)
    {
        printf(" %d,",array2[i]);
    }
    
    return 0;
}