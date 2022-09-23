/*
Write a C program to input marks of five subjects 
of a student and calculate total, average and percentage of all subjects. 
How to calculate total, average and percentage in C programming. 
Logic to find total, average and percentage in C program.
*/

#include<stdio.h>

int main(){

    float m1 , m2 , m3 , m4 , m5 ;

    printf("Enter marks of five subjects:");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);

    printf("Total: %.2f\n",(m1+m2+m3+m4+m5));
    printf("Average: %.2f\n",(m1+m2+m3+m4+m5) / 5 );
    printf("Percentage: %.2f\n",((m1+m2+m3+m4+m5)/ 500) * 100);
    

    return 0;
}