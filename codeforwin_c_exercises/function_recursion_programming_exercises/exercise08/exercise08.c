/*
Write a function to print all Armstrong numbers between given interval in C programming.
How to print all Armstrong numbers in given range using functions in C programming. 
C function to print all Armstrong numbers from 1 to n.
*/

#include<stdio.h>
#include<math.h>

int isArmstrong(int);
void printArmstrong(int,int);


int main(){

    int low,upp;
    

    printf("Enter lower limit:");
    scanf("%d",&low);

    printf("Enter upper limit:");
    scanf("%d",&upp);

    printArmstrong(low,upp);

    return 0;
}


void printArmstrong(int x,int y){
    printf("Armstrong numbers between %d to %d: ",x,y);

    while (x <= y)
    {
        if (isArmstrong(x))
        {
            printf("%d ,",x);
        }
        x++;
    }
    
    
}

int isArmstrong(int x){
    int sum = 0;
    int lastDigit,temp,digits;

    temp = x;
    digits = (int) log10(x) + 1;
    

    while (temp > 0)
    {
        lastDigit = temp % 10;
        sum = sum + round(pow(lastDigit,digits));
        temp /= 10;
    }

    if (x==sum)
    {
        return 1;
    }
    
    return 0;
}