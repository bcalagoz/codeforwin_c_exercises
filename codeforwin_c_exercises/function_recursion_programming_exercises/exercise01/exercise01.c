/*
Write a C program to input any number from user and find cube of the given number using function. 
How to find cube of a given number using function in C programming. 
Write a C function to find cube of a given number.
*/


#include<stdio.h>

int findcube(int);

int main(){

    int num;

    printf("Enter a number:");
    scanf("%d",&num);

    printf("Cube of %d = %d\n",num,findcube(num));

    return 0;
}

int findcube(int x){
    int cube = x * x * x;
    
    return cube;
}