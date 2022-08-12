/*
Write a program to check whether a given year is a leap year or not
*/
#include<stdio.h>

int main()
{
    int leap;
    printf("Enter the Year: ");
    scanf("%d",&leap);

    if(leap % 4 == 0)
        printf("Leap Year %d",leap);
    else
        printf("Not Leap Year %d",leap);

    return 0;
}