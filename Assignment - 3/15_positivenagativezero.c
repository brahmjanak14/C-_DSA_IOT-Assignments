/*
15. Write a program to check whether a given number is positive, negative or zero.
*/

#include<stdio.h>
int main()
{
    int x;
    printf("Enter the Number= ");
    scanf("%d",&x);

    if (x==0)
        printf("%d Zero",x);        
    else if(x>0)
        printf("%d Positive",x);
    else
        printf("%d Non-Positive",x);
    
    return 0;
}