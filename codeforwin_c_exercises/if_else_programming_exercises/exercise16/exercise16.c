/*
Write a C program to input sides of a triangle and check whether 
a triangle is equilateral, scalene or isosceles triangle using if else. 
How to check whether a triangle is equilateral, scalene or isosceles 
triangle in C programming. Logic to classify triangles as equilateral, 
scalene or isosceles triangle if sides are given in C program.
*/

#include<stdio.h>

int main(){

    int a,b,c;

    printf("Enter sides of triangle:");
    scanf("%d %d %d",&a,&b,&c);

    if ((a + b > c) && (a + c > b) && (c + b > a))
    {
        if (a == b && b == c)
        {
            printf("Triangle is equilateral triangle.\n");
        }
        else if ((a == b)||(a == c)||(b == c))
        {
            printf("Triangle is isosceles triangle.\n");
        }
        else 
        {
            printf("Triangle is scalene triangle.\n");
        }
        
    }
    else
    {
    printf("Triangle is not valid.\n");
    }
    



    return 0;
}