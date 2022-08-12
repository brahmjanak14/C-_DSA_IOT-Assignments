/*
12. Write a program to check whether a given alphabet is in uppercase or lowercase.
*/

#include<stdio.h>

int main(){
    char ch;
    printf("Enter the character= ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
        printf("%c is Lower Case Alphabetic ",ch);
    else if(ch>='A' && ch<='Z')
        printf("%c is Upper Case Alphabetic ",ch);
    else
        printf("is the special Character");

    return 0;
}