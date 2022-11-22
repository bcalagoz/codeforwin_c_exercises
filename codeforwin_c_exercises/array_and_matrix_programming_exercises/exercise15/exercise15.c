/*
Write a C program to input elements in two array and merge two array to third array. 
How to merge two array in C programming. 
Logic to merge two sorted array to third array in C program.
*/

#include<stdio.h>
#define MAX_SIZE 1000

int main(){
    int arr1[MAX_SIZE];
    int arr2[MAX_SIZE];
    int merged[MAX_SIZE];
    int size1, size2,temp;
    int count = 0;
    
    printf("Enter the size of first array :");
    scanf("%d",&size1);

    printf("Enter elements in first array :");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d",&arr1[i]);
    }

    puts("");

    printf("Enter the size of second array :");
    scanf("%d",&size2);

    printf("Enter elements in second array :");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d",&arr2[i]);
    }

    for (int i = 0; i < size1+size2; i++)
    {
        merged[i] = arr1[i];
    }

    for (int i = 0; i < size1+size2; i++)
    {
        merged[size1+i] = arr2[i];
    }

    
    for (int i = 0; i < size1+size2; i++)
    {
        for (int j = 0; j < size1+size2-i; j++)
        {
            if (merged[j] > merged[j+1])
            {
                temp = merged[j];
                merged[j] = merged[j+1] ;
                merged[j+1] = temp;
            }
            
        }
        
    }
    
    printf("Array merged in ascending order : ");
    for (int i = 0; i < size1+size2; i++)
    {
        printf("%d ",merged[i]);
    }

    return 0;
}


