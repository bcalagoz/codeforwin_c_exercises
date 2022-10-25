/*
Write a recursive function in C to find sum of all even or odd numbers in a given range. 
How to find sum of all even numbers between 1 to n using recursion in C programming.
*/

#include<stdio.h>

int get_sum_even_numbers(int x,int y);


int main(){

    int low,upp;
    

    printf("Enter lower limit:");
    scanf("%d",&low);

    printf("Enter upper limit:");
    scanf("%d",&upp);

    printf("Sum of even numbers between %d to %d: %d",low,upp,get_sum_even_numbers(low,upp));

    return 0;
}

int get_sum_even_numbers(int x,int y){
    if (x>y)
    {
        return 0;
    }

    return x + get_sum_even_numbers(x+2,y);
}