//1. Write a program to print unit digit of a given number

#include<stdio.h>
int main(){
    
    int no;

    printf("Enter the number: ");
    scanf("%d",&no);

    no = no % 10;

    printf("print unit digit of a given number: %d",no);
        
    return 0;
}