/*
Write a C program to input a number from user and find power of given number using recursion. 
How to find power of a number using recursive function in C programming. 
Logic to find power of a number using recursion in C programming.
*/

#include<stdio.h>
#include<math.h>

double getPower(double,int);

int main(){

    double base,power;
    int expo;
    

    printf("Enter base number:");
    scanf("%lf",&base);

    printf("Enter power:");
    scanf("%d",&expo);

    printf("%.2lf ^ %d = %.2f\n",base,expo,getPower(base,expo));

    return 0;
}

double getPower(double x,int y){
    if (y == 0)
    {
        return 1;
    }
    else if (y > 0)
    {
        return x * pow(x,y - 1);
    }
    else
    {
        return 1 / pow(x,-y);
    }
    
}