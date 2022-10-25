/*
Write a C program to print all elements of array using recursion. 
How to display all elements of an array using recursion. 
Logic to print array elements using recursion in C programming.
*/

#include<stdio.h>

void print_array(int arr[],int start,int len);

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

    printf("Elements in the array: ");
    print_array(arr,0,len);


    return 0;
}

void print_array(int arr[],int start,int len){

    if(start >= len)
        return;
    
    printf("%d, ",arr[start]);

    print_array(arr,start+1,len);
}