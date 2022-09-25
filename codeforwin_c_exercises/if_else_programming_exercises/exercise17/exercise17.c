/*
Write a C program to find all roots of a quadratic equation using if else.
How to find all roots of a quadratic equation using if else in C programming. 
Logic to find roots of quadratic equation in C programming.
*/

#include<stdio.h>
#include<math.h>

int main(){

    float a , b , c;

    printf("Enter a,b,c:");
    scanf("%f %f %f",&a,&b,&c);

    float discriminant , root1 , root2 , i;

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);

        printf("Root 1 : %.2f\n",root1);
        printf("Root 2 : %.2f\n",root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Equal Root  : %.2f\n",root1);
    }
    else if (discriminant < 0)
    {
        root1 = root2 = -b / (2 * a);
        i = sqrt(-discriminant) / (2 * a);

        printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f\n", root1, i, root2, i);

    }
    
    return 0;
}