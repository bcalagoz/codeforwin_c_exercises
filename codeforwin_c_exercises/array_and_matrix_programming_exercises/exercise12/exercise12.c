/*
Write a C program to input elements in array and print all unique elements in array. 
How to find unique elements in array in C programming. 
Logic to find unique elements in array in C program.
*/

#include<stdio.h>
#define MAX_SIZE 1000

int main(){
    int arr[MAX_SIZE];
    int count[MAX_SIZE] = {0};
    int size;
    
    printf("Enter size of the array :");
    scanf("%d",&size);

    printf("Enter elements in array :");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count[i]++;
            }
            
        }
        
    }


    printf("Unique elements in the array are:");
    for (int i = 0; i < size; i++)
    {
        if (count[i] == 1)
        {
            printf("%d ",arr[i]);
        }
        
    }
    
    return 0;
}