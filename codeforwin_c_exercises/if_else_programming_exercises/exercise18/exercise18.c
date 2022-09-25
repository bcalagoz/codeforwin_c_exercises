/*
Write a C program to input cost price and selling price of a product and 
check profit or loss. Also calculate total profit or loss using if else. 
How to calculate profit or loss on any product using if else in C programming. 
Program to calculate profit and loss of any product in C.
*/

#include<stdio.h>

int main(){

int cost,sell,profit,loss;

printf("Enter cost price:");
scanf("%d",&cost);

printf("Enter selling price:");
scanf("%d",&sell);

if (sell > cost)
{
    profit = sell - cost ;
    printf("Profit : %d\n",profit);
}
else if (cost > sell)
{
    loss = cost - sell;
    printf("Loss : %d\n",loss);
}
else
{
    printf("No profit and loss.\n");
}

    return 0;
}