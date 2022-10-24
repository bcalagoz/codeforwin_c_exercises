/*
Write a C program to input two or more numbers from user and find maximum and minimum of the given numbers using functions. 
How to find maximum and minimum of two or more numbers using functions in C programming.
*/

#include<stdio.h>

int getMax(int,int);
int getMin(int,int);

int main(){

    int num1,num2;

    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);

    getMax(num1,num2);
    getMin(num1,num2);
    
    return 0;
}

int getMax(int x,int y){
    return (x >= y ) ? printf("Maximum = %d\n",x) : printf("Maximum = %d\n",y);
}

int getMin(int x,int y){
    return (x <= y ) ? printf("Minimum = %d\n",x) : printf("Minimum = %d\n",y);
}