/*
9. Write a program to find the greatest among three given numbers. Print number once 
if the greatest number appears two or three times.
*/

#include<stdio.h>

int main(){
    int n1,n2,n3;

    printf("Enter Three number Check Big: ");
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1>n2)
        if(n1>n3)
            printf("n1: %d",n1);
        else
            printf("n3: %d",n3);
    else
        if(n2>n3)
            printf("n2: %d",n2);
        else
            printf("n3: %d",n3);
    return 0;
}