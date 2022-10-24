/*
Write a C program to print all strong numbers between a given interval in C programming. 
How to print strong numbers in a given range using functions in C programming. 
Write a C function to find strong numbers between 1 to n.
*/

#include<stdio.h>

int isStrong(int);
void printStrong(int,int);


int main(){

    int low,upp;
    

    printf("Enter lower limit:");
    scanf("%d",&low);

    printf("Enter upper limit:");
    scanf("%d",&upp);

    printStrong(low,upp);


    return 0;
}

void printStrong(int x,int y){
    printf("Strong numbers between %d to %d: ",x,y);

    while (x <= y)
    {
        if (isStrong(x))
        {
            printf("%d ,",x);
        }
        x++;
    }
    
    
}


int isStrong(int x){
    int sum,temp,fac,lastDigit;
    sum = 0;
    temp = x;

    while (temp > 0)
    {
        lastDigit = temp % 10;
        fac = 1;
        for (int i = 1; i <= lastDigit; i++)
        {
            fac = fac * i;
        }
        
        sum = sum + fac;

        temp = temp / 10;
    }

    if (x == sum)
    {
        return 1;
    }
    
    return 0;
}