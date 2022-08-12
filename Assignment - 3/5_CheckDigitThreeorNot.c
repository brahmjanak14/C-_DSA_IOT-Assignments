/*
5. Write a program to check whether a given number is a three-digit number or not.
*/

#include<stdio.h>

int main(){
    int x;
    printf("Enter the Number= ");
    scanf("%d",&x);

    if(x>=100 && x<1000){
        printf("Enter the number are digit Three is %d",x);

    }
    else{
        (x>=1000)?printf("%d is more than digit",x):printf("%d is less than digit",x);
    }

}