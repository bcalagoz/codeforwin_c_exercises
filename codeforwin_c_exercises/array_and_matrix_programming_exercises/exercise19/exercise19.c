/*
Write a C program to input elements in array and sort array elements in ascending or descending order. 
How to sort array in ascending order in C programming. 
Logic to sort array in ascending or descending order.
*/

#include<stdio.h>
#define MAX_SIZE 1000

void sortArray(int arr[],int size);

int main(){
    int arr[MAX_SIZE];
    int size;

    
    printf("Enter size of the array:");
    scanf("%d",&size);

    printf("Enter elements in array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    sortArray(arr,size);

    return 0;

}

void sortArray(int arr[],int size){
    int temp,i,j;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1] ;
                arr[j+1] = temp;
            }
            
        }
        
    }
    
    printf("Elements of array in ascending order: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
}