/*
Write a C program to input elements in array and find reverse of array. 
How to find reverse of array in C programming. 
Logic to find reverse of array in C program.
*/

#include<stdio.h>
#define MAX_SIZE 1000

int main(){
    int arr[MAX_SIZE];
    int reversed[MAX_SIZE];
    int size;

    
    printf("Enter size of the array:");
    scanf("%d",&size);

    printf("Enter elements in array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0,j = size-1; i < size ; i++,j--)
    {
        reversed[j] = arr[i];
        
    }
    
    printf("Reversed array :");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",reversed[i]);
    }
    
    return 0;
}