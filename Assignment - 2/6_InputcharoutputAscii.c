/*
6. Write a program which takes a character as an input and displays its ASCII code.
*/

#include<stdio.h>

int main(){
    char ch;
    printf("Enter the character(ex. \'a\',\'A\'): ");
    scanf("%c",&ch);

    printf("character is: %c  ASCII code %d",ch,ch); 

    return 0;
}