/*
Write a C program to input elements in an array from user, find maximum and minimum element in array. 
C program to find biggest and smallest elements in an array. 
Logic to find maximum and minimum element in array in C programming.
*/

#include<stdio.h>
#define MAX_SIZE 1000

int main(){

    int array[MAX_SIZE];
    int size,max,min;
    
    printf("Enter size of array: ");
    scanf("%d",&size);

    printf("Enter %d elements in the array :",size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }

    max = array[0];

    for (int i = 0; i < size; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
        
    }

    min = array[0];

    for (int i = 0; i < size; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }

    printf("Maximum Element : %d\n",max);
    printf("Minimum Element : %d\n",min);
    
    
    return 0;
}