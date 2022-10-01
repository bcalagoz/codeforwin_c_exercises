/*
Write a C program to input a number and check positive negative or zero using switch case. 
Checking negative, positive or zero using switch case is little tricky. 
In this example, I will explain how to check positive negative or zero using switch case. 
However, it is not recommended way, it's just for learning.
*/

#include<stdio.h>

int main(){

    int num;

    printf("Enter any number:");
    scanf("%d",&num);


    switch (num > 0)
    {
    case 1:
        printf("%d is POSİTİVE.\n",num);
        break;
    case 0:
        switch (num <0)
        {
        case 1:
            printf("%d is NEGATİVE.\n",num);
            break;
        case 0:
            printf("%d = 0\n",num);
            break;
        
        }
        
        break;
    }

    return 0;
}