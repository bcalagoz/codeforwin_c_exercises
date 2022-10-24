/*
Write a recursive function in C programming to find sum of all natural numbers between 1 to n. 
How to find sum of all natural numbers using recursion in C program. 
Logic to find sum of natural numbers in given range using recursion.
*/

#include<stdio.h>

int get_sum_numbers(int x,int y);

int main(){

    int low,upp;
    

    printf("Enter lower limit:");
    scanf("%d",&low);

    printf("Enter upper limit:");
    scanf("%d",&upp);

    printf("Sum of natural numbers from %d to %d = %d",low,upp,get_sum_numbers(low,upp));


    return 0;
}

int get_sum_numbers(int x,int y){
    if (x==y)
    {
        return x;
    }

    return x + get_sum_numbers(x+1,y);
}
