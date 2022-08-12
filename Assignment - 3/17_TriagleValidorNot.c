/*
17. Write a program which takes the length of the sides of a triangle as an input. Display 
whether the triangle is valid or not. 
*/

#include<stdio.h>

int main()
{
    int a,b,c;

    printf("\n Check Triangle valid or not\n");
    
    printf("\nEnter the side of Traiangle: ");
    scanf("%d %d %d",&a,&b,&c);

    if((a+b>c) && (b+c>a) && (c+a>b))
        printf("Valid Triangle");
    else   
        printf("Not Valid Triangle");

    return 0;
}