/*
Write a C program to input elements in array and put even and odd elements in separate array. 
How to separate even and odd array elements in two separate array containing only even or odd elements using C programming.
*/

#include<stdio.h>
#define MAX_SIZE 1000

int main(){
    int arr[MAX_SIZE];
    int even[MAX_SIZE],odd[MAX_SIZE];
    int size, element1 = 0 , element2 = 0;

    
    printf("Enter size of the array:");
    scanf("%d",&size);

    printf("Enter elements in array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    puts(" ");

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[element1] = arr[i];
            element1++;
        }
        else
        {
            odd[element2] = arr[i];
            element2++;
        }
    }

    printf("Elements of even array:\n");
    printf("Elements in the array: ");
    for (int i = 0; i < element1; i++)
    {
        printf("%d ",even[i]);
    }

    puts("");

    printf("Elements of odd array:\n");
    printf("Elements in the array: ");
    for (int i = 0; i < element2; i++)
    {
        printf("%d ",odd[i]);
    }
    
    return 0;

}
    

