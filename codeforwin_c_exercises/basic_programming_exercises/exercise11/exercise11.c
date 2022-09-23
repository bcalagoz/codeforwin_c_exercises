/*
Write a C program to input two numbers from user 
and find their power using pow() function. How to find 
power of a number in C programming. How to use pow() function in C programming.
*/

#include<stdio.h>
#include<math.h>

int main(){

    int x , y , p;

    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);

    p = pow(x,y);

    printf("%d ^ %d = %d\n",x,y,p);


    return 0;
}