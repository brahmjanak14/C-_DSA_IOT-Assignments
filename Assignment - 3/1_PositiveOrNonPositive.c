/*
1. Write a program to check whether a given number is positive or non-positive.
*/

#include<stdio.h>
int main()
{
    int x;
    printf("Enter the Number= ");
    scanf("%d",&x);

    if (x>0)
    {
        printf("x is %d Positive",x);
    }
    if(x<=0){
        printf("X is %d Non-Positive",x);
    }
    
    return 0;
}