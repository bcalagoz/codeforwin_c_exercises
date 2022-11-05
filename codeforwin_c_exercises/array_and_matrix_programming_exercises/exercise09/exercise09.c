/*
Write a C program to insert element in array at specified position. 
C program to insert element in array at given position. 
The program should also print an error message if the insert position is invalid. 
Logic to insert an element in array at given position in C program.
*/

#include<stdio.h>
#define MAX_SIZE 1000

int main(){

    int array[MAX_SIZE];
    int size,newElement,position;
    
    printf("Enter size of array: ");
    scanf("%d",&size);

    printf("Enter %d elements in the array :",size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter element to insert :");
    scanf("%d",&newElement);
    
    printf("Enter the element position :");
    scanf("%d",&position);

    if (position <= 0 || position > size+1)
    {
        printf("INVALID POSITION!");
    }
    else
    {
        for (int i = size; i >= position; i--)
        {
            array[i] = array[i-1];
        }
        
        array[position-1] = newElement;
        size++;
    }
    

    printf("Array elements after insertion :");

    for (int i = 0; i < size; i++)
    {
        printf(" %d,",array[i]);
    }
    
    return 0;
}