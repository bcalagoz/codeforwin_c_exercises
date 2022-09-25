/*
Write a C program to input amount from user and 
print minimum number of notes (Rs. 500, 100, 50, 20, 10, 5, 2, 1) 
required for the amount. How to the minimum number of notes required for 
the given amount in C programming. Program to find minimum number of 
notes required for the given denomination. Logic to find 
minimum number of denomination for a given amount in C program.
*/

#include<stdio.h>

int main(){

    int a;
    int note500, note100, note50, note20, note10, note5, note2, note1;

    note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0 ;

    printf("Enter an amount:");
    scanf("%d",&a);

    if(a >= 500)
    {
        note500 = a/500;
        a -= note500 * 500;
    }
    if (a  >= 100)
    {
        note100 = a/100;
        a -= note100 * 100;
    }
    if (a  >= 50)
    {
        note50 = a/50;
        a -= note50 * 50;
    }
    if (a  >= 20)
    {
        note20 = a/20;
        a -= note20 * 20;
    }
    if (a  >= 10)
    {
        note10 = a/10;
        a -= note10 * 10;
    }
    if (a  >= 5)
    {
        note5 = a/5;
        a -= note5 * 5;
    }
    if (a  >= 2)
    {
        note2 = a/2;
        a -= note2 * 2;
    }
    if (a  >= 1)
    {
        note1 = a/1;
        a -= note1 * 1;
    }
    
    printf("All Notes : \n");
    printf("500 = %d\n", note500);
    printf("100 = %d\n", note100);
    printf("50 = %d\n", note50);
    printf("20 = %d\n", note20);
    printf("10 = %d\n", note10);
    printf("5 = %d\n", note5);
    printf("2 = %d\n", note2);
    printf("1 = %d\n", note1);



    return 0;
}