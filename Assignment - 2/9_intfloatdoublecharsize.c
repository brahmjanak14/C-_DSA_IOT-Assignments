/*
9. Write a program to print size of an int, a float, a char and a double type variable
*/
#include<stdio.h>

int main(){
    int a=5;double b=7.5;float c=5.2;char d='A';

    printf("Size int a= %d\n",sizeof(a));
    printf("Size double b=%d\n",sizeof(b));
    printf("Size float c=%d\n",sizeof(c));
    printf("Size char d=%d\n",sizeof(d));

    return 0;
}