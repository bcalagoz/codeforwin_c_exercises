/*
Write a C program to input two numbers from user and find maximum 
between two numbers using switch case. How to find maximum or minimum 
between two numbers using switch case. Logic to find maximum 
between two numbers using switch case in C programming.
*/

#include<stdio.h>

int main(){

    int x,y;

    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);

    switch (x > y)
    {
    case 1:
        printf("Max : %d\n",x);
        break;
    case 0:
        printf("Max : %d\n",y);
        break;    
    }
    return 0;
}