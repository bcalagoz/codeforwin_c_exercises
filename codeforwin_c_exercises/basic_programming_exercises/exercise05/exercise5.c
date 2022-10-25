/*
Write a C program to input length and width of 
a rectangle and find area of the given rectangle. 
*/

#include<stdio.h>

int main(){

    int legth,width;
    int area;

    printf("Enter legth:");
    scanf("%d",&legth);

    printf("Enter width:");
    scanf("%d",&width);

    area = legth * width;

    printf("Area is %d\n",area);


    return 0;
}
