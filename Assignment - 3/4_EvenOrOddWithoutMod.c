/*
4. Write a program to check whether a given number is an even number or an odd 
number without using % operator.
*/

#include<stdio.h>
int main(){
    int x,mult,div,ans;
    printf("Enter the Number= ");
    scanf("%d",&x);

    mult = x * 2;
    div = x / 2;
    ans = div*2;

    if(x == ans){
        printf("is %d Even Number",x);
    }
    else{
        printf("is %d Odd Number",x);
    }
}