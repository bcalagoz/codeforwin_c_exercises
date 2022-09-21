/*
Write a C program to input length in centimeter 
and convert it to meter and kilometer. How to convert length 
from centimeter to meter and kilometer in C programming. 
Length conversion program in C from centimeter to meter and centimeter to kilometer.
*/

#include<stdio.h>

int main(){
    
    int length;

    printf("Length (cm):");
    scanf("%d",&length);

    printf("%dcm is %.2fm\n",length,(length/100.0));
    printf("%dcm is %.2fkm\n",length,(length/100000.0));


    return 0;
}
