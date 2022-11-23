/*
Write a C program to left rotate an array by n position. 
How to rotate left rotate an array n times in C programming. 
Logic to rotate an array to left by n position in C program.
*/

#include<stdio.h>
#define SIZE 10

void printArray(int arr[],int size);
void rotateArray(int arr[]);

int main(){

    int arr[SIZE];
    int rotation;


    printf("Enter 10 elements in array:");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter number of times to left rotate:");
    scanf("%d",&rotation);

    rotation = rotation % SIZE;

    printf("Array before rotation\n");
    printArray(arr,SIZE);

    for (int i = 0; i < rotation; i++)
    {
        rotateArray(arr);
    }
    
    puts("");

    printf("Array after rotation\n");
    printArray(arr,SIZE);
 
    return 0;
}


void rotateArray(int arr[]){
    int temp;

    temp = arr[0];

    for (int i = 0; i < SIZE-1; i++)
    {
        arr[i] = arr[i+1];
    }
    
    arr[SIZE-1] = temp;
}


void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
}