/*
Write a C program to input elements in array from user and count even and odd elements in array. 
How to find total number of even and odd elements in a given array using C programming. 
Logic to count even and odd elements in array using loops.
*/

#include<stdio.h>
#define MAX_SIZE 1000

int main(){

    int array[MAX_SIZE],size;
    int countEven = 0;
    int countOdd = 0;
    
    printf("Enter size of array: ");
    scanf("%d",&size);

    printf("Enter %d elements in the array :",size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    
    
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    }
    
    printf("Total even elements: %d\n",countEven);
    printf("Total odd elements: %d\n",countOdd);


    return 0;
}