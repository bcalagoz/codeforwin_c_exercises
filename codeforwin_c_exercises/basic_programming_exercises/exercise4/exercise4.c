/*
Write a C program to input length and width of 
a rectangle and calculate perimeter of the rectangle. 
How to find perimeter of a rectangle in C programming. 
Logic to find the perimeter of a rectangle if length 
and width are given in C programming.
*/

#include<stdio.h>

int main(){

    int legth,width;
    int perimeter;

    printf("Enter legth:");
    scanf("%d",&legth);

    printf("Enter width:");
    scanf("%d",&width);

    perimeter = (2*legth)+(2*width);

    printf("Perimeter is %d\n",perimeter);


    return 0;
}

