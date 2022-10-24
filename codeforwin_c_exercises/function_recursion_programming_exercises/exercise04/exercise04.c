/*
Write a C program to input a number from user and check whether given number is even or odd using functions. 
How to check even or odd using functions in C programming. 
Write a function in C programming to check even or odd.
*/

#include<stdio.h>

int getEvenOdd(int);

int main(){

    int num;

    printf("Enter a number:");
    scanf("%d",&num);

    getEvenOdd(num);

    return 0;
}
    

int getEvenOdd(int x){
    return (x%2==0) ? printf("%d is EVEN\n",x) : printf("%d is ODD\n",x);
}