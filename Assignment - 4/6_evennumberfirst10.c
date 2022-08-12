/*
6. Write a program to print the first 10 even natural numbers
*/

#include<stdio.h>

int main(){
   int evn,i;
    
    for(i=1;i<=10;i++)
    {
        evn = i * 2;

        printf("%d\n",evn);
    }


    
    return 0;
}