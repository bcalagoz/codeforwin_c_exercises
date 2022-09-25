/*
Write a C program to check whether a triangle is valid 
or not if angles are given using if else. How to check whether 
a triangle can be formed or not, if its angles are given using 
if else in C programming. Logic to check triangle validity if angles are given in C program.
*/

#include<stdio.h>

int main(){

    int x,y,z;
    int total;

    printf("Enter three angles:");
    scanf("%d %d %d",&x,&y,&z);

    total = x + y + z;

    if ((total == 180) && (x >0) && (y > 0) && (z > 0))
    {
        printf("The triangle is valid.\n");
    }
    else
    {
        printf("The triangle is NOT valid.\n");
    }
    

    return 0;
}