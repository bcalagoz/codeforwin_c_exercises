/*
Write a C program to find largest and second largest element in an array.
How to find second largest element in array in C programming language. 
Logic to find second largest element in array in C program.
*/

#include<stdio.h>
#include <limits.h> 

#define MAX_SIZE 1000

int main(){

    int array[MAX_SIZE];
    int size,max1,max2;

    printf("Enter size of array: ");
    scanf("%d",&size);

    printf("Enter %d elements in the array :",size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }

    max1 = max2 = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (array[i] > max1)
        {
            max2 = max1;
            max1 = array[i];
        }
        else if (array[i] > max2 && array[i] < max1)
        {
            max2 = array[i];
        } 
    }
    
    printf("First largest = %d\n",max1);
    printf("Second largest = %d\n",max2);
    
    
    return 0;
}