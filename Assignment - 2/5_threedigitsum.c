/*
5. Write a program to input a three-digit number and display the sum of the digits.
*/

#include<stdio.h>
int main(){
    int no=458;

    no = no / 100 % 10 + no / 10 % 10 + no % 10;

    printf("digit sum is= %d",no);
    
}