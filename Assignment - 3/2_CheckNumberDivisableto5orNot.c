/*
2. Write a program to check whether a given number is divisible by 5 or not
*/

#include<stdio.h>
int main(){
    int x;
    printf("Enter the Number= ");
    scanf("%d",&x);

    if(x%5==0){
        printf("%d is divisable to 5",x);
    }
    else{
        printf("%d is Not divisable to 5",x);
    }

    return 0;
}