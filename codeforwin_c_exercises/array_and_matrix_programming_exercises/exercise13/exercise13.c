/*
Write a C program to input elements in array from user and count duplicate elements in array. 
C program to find all duplicate elements in an unsorted array. 
How to count duplicate elements in array using loop in C programming.
*/

#include<stdio.h>
#define MAX_SIZE 1000

int main(){
    int arr[MAX_SIZE];
    int size;
    int count = 0;
    
    printf("Enter size of the array :");
    scanf("%d",&size);

    printf("Enter elements in array :");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
            
        }
        
    }
    
    printf("Total number of duplicate elements = %d\n",count);

    return 0;

}