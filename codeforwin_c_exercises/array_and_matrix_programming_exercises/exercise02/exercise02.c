/*
Write a C program to input elements in array and print all negative elements. 
How to display all negative elements in array using loop in C program. 
Logic to display all negative elements in a given array in C programming.
*/

#include<stdio.h>
#define MAX_SIZE 1000

int main(){

    int array[MAX_SIZE];
    int size;

    printf("Enter size of the array :");
    scanf("%d",&size);

    printf("Enter elements in array :");

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    
    printf("All negative elements in array are :");

    for (int i = 0; i < size; i++)
    {
        if (array[i] < 0)
        {
            printf("%d\t",array[i]);
        }
        
    }
    
    return 0;
}