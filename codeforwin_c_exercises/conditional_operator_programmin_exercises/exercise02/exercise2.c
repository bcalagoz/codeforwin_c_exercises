/*
Write a C program to input three numbers from user 
and find maximum between three numbers using conditional/ternary 
operator ?:. How to find maximum between three numbers using conditional operator.
*/

#include<stdio.h>

int main(){

    int x , y , z;

    printf("Enter three number:");
    scanf("%d %d %d",&x,&y,&z);

    (x>=y && x>=z) ? printf("Maximum = %d",x) : (y>=z) ? printf("Max:%d",y) : printf("Max:%d",z);

    return 0;
}