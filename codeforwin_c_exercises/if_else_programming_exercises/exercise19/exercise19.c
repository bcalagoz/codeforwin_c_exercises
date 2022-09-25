/*
Write a C program to input marks of five subjects 
Physics, Chemistry, Biology, Mathematics and Computer, calculate percentage 
and grade according to given conditions:

If percentage >= 90% : Grade A
If percentage >= 80% : Grade B
If percentage >= 70% : Grade C
If percentage >= 60% : Grade D
If percentage >= 40% : Grade E
If percentage < 40% : Grade F
*/

#include<stdio.h>

int main(){

    int phy, che, bio, mat, com;
    float per;
    
    printf("Enter five marks of five subjects: ");
    scanf("%d %d %d %d %d",&phy, &che, &bio, &mat, &com);

    per = (phy + che + bio + mat + com) / 5.0;

    if (per >= 90)
    {
        printf("Percentage : %.2f\n",per);
        printf("Grade A\n");
    }
    else if (per >= 80)
    {
        printf("Percentage : %.2f\n",per);
        printf("Grade B\n");
    }
    else if (per >= 70)
    {
        printf("Percentage : %.2f\n",per);
        printf("Grade C\n");
    }
    else if (per >= 60)
    {
        printf("Percentage : %.2f\n",per);
        printf("Grade D\n");
    }
    else if (per >= 40)
    {
        printf("Percentage : %.2f\n",per);
        printf("Grade E\n");
    }
    else
    {
        printf("Percentage : %.2f\n",per);
        printf("Grade F\n");
    }


    return 0;
}