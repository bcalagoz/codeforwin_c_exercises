/*
Write a C program to find sum of array elements using recursion. 
How to find sum of array elements using recursive function in C programming. 
Logic to find sum of array elements using recursion in C program.
*/

#include<stdio.h>

int sum_of_array(int arr[],int start,int len);

int main(){

    int arr[100];
    int len;

    printf("Enter size of array:");
    scanf(" %d", &len);

    printf("Enter %d elements in the array:",len);

    for (int i = 0; i < len; i++)
    {
        scanf(" %d", &arr[i]);
    }

    printf("Sum of array: %d",sum_of_array(arr,0,len));
    
    return 0;
}

int sum_of_array(int arr[],int start,int len){

    if(start >= len)
        return 0;
    
    return arr[start] + sum_of_array(arr,start+1,len);
}