/*
Write a C program to input elements in array and search whether an element exists in array or not. 
How to search element in array linearly in C programming. 
Logic to search element in array sequentially in C program.
*/

#include<stdio.h>
#include<stdbool.h>
#define MAX_SIZE 1000

void findElement(int arr[],int size,int element);

int main(){
    int arr[MAX_SIZE];
    int size, element;

    
    printf("Enter size of the array:");
    scanf("%d",&size);

    printf("Enter elements in array:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    puts("");

    printf("Enter element to search: ");
    scanf("%d",&element);

    findElement(arr,size,element);
    

    return 0;

}


void findElement(int arr[],int size,int element){

bool flag = false;
int i;

for (i = 0; i < size; i++)
{
    
    if (arr[i] == element)
    {
        flag = true;
        break;
    }
}

if (flag)
{
    printf("%d is found at position %d",element,i+1);
}
else
{
    printf("\n%d is not found in the array", element);
}

}