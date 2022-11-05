/*
Write a C program to declare, initialize, input elements in array and print array. 
How to input and display elements in an array using for loop in C programming. 
C program to input and print array elements using loop.
*/

#include<stdio.h>
#define MAX_SIZE 1000

int main(){

    int array[MAX_SIZE];
    int size;
    
    printf("Enter size of array: ");
    scanf("%d",&size);

    printf("Enter %d elements in the array :",size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    
    printf("Elements in array are :");

    for (int i = 0; i < size; i++)
    {
        printf(" %d,",array[i]);
    }
    
    return 0;
}