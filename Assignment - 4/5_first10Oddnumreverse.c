/*
5. Write a program to print the first 10 odd natural numbers in reverse order.
*/

#include<stdio.h>

int main(){
    int i=21;
    while (i>=1)
    {
        i-=2;
        if(i>-1)
        printf("%d ",i);
    }
    
    return 0;
}