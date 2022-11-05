/*
Write a C program to read elements in an array and find the sum of array elements. 
C program to find sum of elements of the array. 
How to add elements of an array using for loop in C programming. 
Logic to find sum of array elements in C programming.
*/

#include<stdio.h>
#define MAX_SIZE 1000

int main(){

    int array[MAX_SIZE];
    int size;
    int sum = 0;
    
    printf("Enter size of array: ");
    scanf("%d",&size);

    printf("Enter %d elements in the array :",size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    
    printf("Sum of all elements of array = %d\n",sum);

    return 0;
}