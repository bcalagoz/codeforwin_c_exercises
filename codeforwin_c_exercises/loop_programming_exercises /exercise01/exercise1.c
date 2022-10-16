/*
Write a C program to print all natural numbers from 1 to n using loop. 
C program to print first n natural numbers using loop. 
How to print natural numbers in a given range using loop. 
Logic to print natural numbers using for and for loop in C program.
*/

#include<stdio.h>


int main(){

    int i = 1;
    int n;

    printf("Enter upper limit:");
    scanf("%d",&n);

    printf("Natural numbers from 1 to 10:\n");

    while (i <= n) //with while loop
    {    
        printf("%d\n",i);
        i++ ; 
    }
    

/*

int main(){

    int i, n;

    printf("Enter upper limit:");
    scanf("%d",&n);

    printf("Natural numbers from 1 to 10:\n");

    for (int i = 1; i <= n; i++) //with for loop
    {
        printf("%d\n",i);
    }
    

*/

    return 0;
}
