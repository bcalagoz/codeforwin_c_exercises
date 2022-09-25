/*
Write a C program to input side of a triangle and check whether 
triangle is valid or not using if else. How to check whether a 
triangle can be formed or not if sides of triangle is given using 
if else in C programming. Logic to check triangle validity if sides are given in C program.
*/

#include<stdio.h>

int main(){

    int a,b,c;

    printf("Enter three sides of triangle:");
    scanf("%d %d %d",&a,&b,&c);

    if ((a + b > c) && (a + c > b) && (c + b > a))
    {
        printf("Triangle is valid.\n");
    }
    else
    {
        printf("Triangle is not valid.\n");
    }
    

    return 0;
}