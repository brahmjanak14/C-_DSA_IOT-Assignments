/*
16. Write a program to check whether a given character is an alphabet (uppercase), an 
alphabet (lower case), a digit or a special character.
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
    else if(ch>='0' && ch<='9')
        printf("%c is Digit",ch);
    else
        printf("is the special Character");

    return 0;
}