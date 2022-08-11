/*
8. Write a program to check whether the given number is even or odd using a bitwise
operator.
*/

#include<stdio.h>

int main()
{
    int no;

    printf("Enter the number(check Even and Odd): ");
    scanf("%d",&no);

    if((no & 1) == 1)
        printf("Odd");
    else
        printf("Even");

    return 0;
}
