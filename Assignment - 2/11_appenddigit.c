/*
11. Write a program to input a number from the user and also input a digit. Append a 
digit in the number and print the resulting number. (Example - number=234 and 
digit=9 then the resulting number is 2349)
*/

#include<stdio.h>
int main(){
    int no,no2;

    printf("Enter Two number: ");
    scanf("%d %d",&no,&no2);

    no = no * 10 + no2;

    printf("\nAnsware is the no: %d",no);
    return 0;
}

